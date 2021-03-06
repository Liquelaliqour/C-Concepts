#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void print_data(struct node *head)
{
	struct node *ptr;

	if (head == NULL)
		printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		printf("prt->data: %d\n", ptr->data);
		ptr = ptr -> link;
	}
}
void add_lastnode(struct node *head, int data)
{
	struct node *ptr, *temp;

	ptr = head;
	temp = (struct node*)malloc(sizeof(struct node));

	temp -> data = data;
	temp -> link = NULL;

	while(ptr -> link != NULL)
		ptr = ptr -> link;
	ptr -> link = temp;
}
int main()
{
	struct node *head = NULL;
	struct node *current = NULL;
	struct node *current2 = NULL;

	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	current = malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;

	current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;
	add_lastnode(head, 67);
	add_lastnode(head, 82);
	print_data(head);
	return (0);
}
