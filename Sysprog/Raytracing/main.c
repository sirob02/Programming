#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "simple_ray/ray_default_scene.h"


//functions
void errorCheck(unsigned int numPro,unsigned int res, int samples);

int main(int argc, char** argv)
{
	/* TODO: check and parse command line arguments */
	if (argc < 4){
		perror("ERROR: to few arguments");
	}
	
	unsigned int numPro = atoi(*(argv+1));
	unsigned int res = atoi(*(argv+2));
	int samples = atoi(*(argv+3));
	
	errorCheck(numPro,res,samples);



	/* initialize scene */
	ray_Scene* scene = ray_createDefaultScene();

	/* TODO: divide work load and create n child processes */

	ray_renderScene();


	/* TODO: each child process renders it's part of the image and saves it to an individual file;
			 the parent process meanwhile waits for children to finish their work
	*/

	/* TODO: parent process loads all files and merges them into a single image */

	/* TODO: save final image to file "final.bmp" */


	/* free memory */
	ray_freeScene(scene);
	/* TODO: make sure to free all allocated memory */
	
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