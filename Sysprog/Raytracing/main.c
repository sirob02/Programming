#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>
#include "simple_ray/ray_default_scene.h"


//functions
void errorCheck(unsigned int numPro,unsigned int res, int samples);

int main(int argc, char** argv)
{
	/* TODO: check and parse command line arguments */
	if (argc < 4){
		printf("./raytracer <Anzahl der Prozesse (1-128)> <Auflösung (1-10.000)> <Anzahl der Samples (>= 1)> \n");
		perror("ERROR: to few arguments\n");
	}
	
	unsigned int numPro = atoi(*(argv+1));
	unsigned int res = atoi(*(argv+2));
	int samples = atoi(*(argv+3));
	
	errorCheck(numPro,res,samples);

	/* initialize scene */
	ray_Scene* scene = ray_createDefaultScene();

	//variables
	char* proName = "123456789";
	int scope = (int) (res / numPro);
	clock_t end;


	bmp_Image *img;
	
	/* TODO: divide work load and create n child processes */
	int pid;
	for(int i = 0; i < numPro+1; i++) {
    	pid = fork();
    
		if(pid < 0) {
			printf("Error pid %d\n",pid);
			exit(1);
		} else if (pid == 0) {
			printf("Child (%d): %d\n", i + 1, getpid());

			bmp_Rect new_bmp_Rect;
			new_bmp_Rect.h = res;
			new_bmp_Rect.w = scope;
			new_bmp_Rect.x = (i-1) * scope;
			new_bmp_Rect.y = 0;

			img =  ray_renderScene(&new_bmp_Rect,res,res,samples,scene,proName);
			bmp_saveToFile(img,&proName[i-1]);
			bmp_free(img); 
			exit(0); 
		} else  {
			wait(NULL);
		}
	}


	//join all pieces
	bmp_Image *src_img;
	bmp_Image *hold = bmp_loadFromData(res,res,NULL);
	for (int i = 0; i < numPro; i++){
		src_img = bmp_loadFromFile(&proName[i]);
		bmp_stamp(src_img,hold,i*scope,0);
		bmp_free(src_img);
	}

	//save result
	bmp_saveToFile(hold,"result");
	bmp_free(hold);

	/* free memory */
	ray_freeScene(scene);
	free(proName);
	
	end = clock();
	printf("Time used %ld \n",end);
	return 0;
}


void errorCheck(unsigned int numPro,unsigned int res, int samples){

	if (numPro < 1 || numPro > 128 ){
		perror("ERROR: Number of Processes 1- 128 ");
	}

	if (res < 1 || res > 10000){
		perror("ERROR: Resolution 1-10000");
	}
	if (samples < 1)
	{
		perror("ERROR: Samples >=1");
	}
	printf("Anzahl der Prozesse: %d \n",numPro);
	printf("Auflösung: %d x %d \n",res,res);
	printf("Samples %d \n",samples);
}