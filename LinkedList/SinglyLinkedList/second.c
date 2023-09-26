#include "dsa.h"

typedef struct node
{
	int data;
	struct node *next;
} node;

void print();

int main(void)
{


	node *head, *newnode;
	head = newnode;

	newnode = malloc(sizeof(node));
	newnode->data = 19;
	newnode->next = NULL;
	head->next = newnode;
	newnode = malloc(sizeof(node));
	newnode->data = 30;
	newnode->next = NULL;
	newnode->next = newnode;
	
	print();
	return (0);
}

void print()
{
	node *temp;

	temp = head;

	while (temp != NULL)
	{
		printf("%d ", temp->data);
	}
	printf("\n");
}
