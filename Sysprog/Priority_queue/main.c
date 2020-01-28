#include "prio_q.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct prio_q *queue;
	char *s;
	int i;

	queue = prio_q_create();

	prio_q_push(queue, "amet...", 2);
	print_q(queue);
	prio_q_push(queue, "ipsum", 7);
	print_q(queue);
	prio_q_push(queue, "dolor", 4);
	print_q(queue);
	prio_q_push(queue, "Lorem", 22);
	print_q(queue);
	prio_q_push(queue, "sit", 3);
	print_q(queue);



	for (i = 0; i < 3; i++) {
		s = prio_q_pop(queue);
		printf("%s\n", s);
	}
	print_q(queue);

	s = prio_q_front(queue);
	printf("%s\n", s);
	print_q(queue);


	prio_q_destroy(queue);
	// use: valgrind ./stack
	// to check if your free function works correctly

	return 0;
}
