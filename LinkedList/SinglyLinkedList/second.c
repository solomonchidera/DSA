#include "dsa.h"

typedef struct node
{
	int data;
	struct node *next;
} node;

node *head, newnode, temp;
head = NULL;

newnode = malloc(sizeof(node));
newnode->data = 19;
newnode->next = NULL;
head->next = newnode;
newnode = malloc(sizeof(node));
newnode->data = 30;
newnode->next = NULL;
newnode->next = newnode;

void print()
{
	temp = head;

	while (temp != NULL)
	{
		printf("%d ", temp->data);
	}
	printf("\n");
}

int main(void)
{
	print();
	return (0);
}
