#include <stdlib.h>
#include <stdio.h>
#include "prio_q.h"

struct prio_q {
	int size;			// size of queue
	struct elem *first;	// first queue entry
};

struct elem {
	// TODO add struct entries
	int prio;
	void *data;
	struct elem *next;
	struct elem *prev;
};

struct prio_q * prio_q_create() {

	struct prio_q *new =(struct prio_q*)malloc(sizeof(struct prio_q));
	new->first=NULL;
	new->size=0;

	return new;

	// TODO 
}

void prio_q_push(struct prio_q *q, void *data, int prio) {
	//Error no queue
	if (!q){
		perror("No Queue");
	}
	q->size++;
	//Check 1st Element
	if (!q->first){
		struct elem *newElem = (struct elem*)malloc(sizeof(struct elem)); 
		newElem->data=data;

		newElem->next=NULL;
		newElem->prio=prio;

		q->first=newElem;
		return;
	}

	struct elem *loop = q->first;

	struct elem *newElem = (struct elem*)malloc(sizeof(struct elem)); 
	newElem->data=data;
	newElem->prio=prio;

	//look for prev item
	while (loop){
			if (newElem->prio > q->first->prio){
				break;
			}
			
			if (!loop->next){
				break;
			}
			if (loop->next->prio < newElem->prio ){
				break;
			}
			loop=loop->next;
	}

	if (newElem->prio > q->first->prio){
				//first is higher
				newElem->next =loop ;
				q->first=newElem;
				return;
	}
	newElem->next=loop->next;
	loop->next=newElem;

	// TODO
	
}

void* prio_q_pop(struct prio_q *q) {
	// TODO
	struct elem *tmp = q->first;
	void *elemt = tmp->data;



	q->first=q->first->next;
	free(tmp);

	return elemt;
}

void * prio_q_front(struct prio_q *q) {
	// TODO
	return q->first->data;
}

void prio_q_destroy(struct prio_q *q) {

	while (q->first){
		struct elem *tmp = q->first;
		q->first=q->first->next;
		free(tmp);
	}
	free(q);
	
}

void print_q(struct prio_q *q){

	struct elem *tmp = q->first;

	while (tmp){
		printf(" %d -> ", tmp->prio);
		tmp=tmp->next;
	}
	 printf("\n");

}
