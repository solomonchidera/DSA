#include "dsa.h"


struct node
{
	int data;
	struct node *next;
};

int main(void)
{
	struct node *head;
	struct node *newnode;
	head = malloc(sizeof(struct node));

	head->data = 100;
	head->next = NULL;
	printf("%d\n", head->data);

	newnode = malloc(sizeof(struct node));

	newnode->data = 102;
	newnode->next = NULL;
	head->next = newnode;
	printf("%d\n", newnode->data);

	return (0);
}
