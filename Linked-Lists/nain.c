#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void)
{
        struct node *head = NULL;
	struct node *current = NULL;
	struct node *current2 = NULL;
	struct node *ptr = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;
	
	current = (struct node*)malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;
	
	current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;
	
	int data = 78, pos = 1;

	printf("Before adding %d a node at position : %d \n", data, pos);
	print_data(head);
	
	/*	head = add_node_at_pos(head, data, pos);
	
	printf("After adding %d a node at position : %d \n", data, pos);
	print_data(head);
	*/
	return (0);
}
