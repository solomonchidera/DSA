#include "dsa.h"

struct Node
{
	int data;
	struct Node *next;
};

int main(void)
{


	struct Node *head = NULL;
	struct Node *current;
	struct Node *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->data = 48;
	newnode->next = NULL;

	newnode->next = head;
	head = newnode;
	current = head;

	while (current != NULL)
	{
		printf("The content of the node is %d\n", current->data);
		current = current->next;
	}
	return (0);
}
