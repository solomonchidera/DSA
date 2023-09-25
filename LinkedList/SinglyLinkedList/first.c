#include "dsa.h"


struct node
{
	int data;
	struct node *next;
};

int main(void)
{
	struct node *head;
	head = malloc(sizeof(struct node));

	head->data = 100;
	head->next = NULL;
	printf("%d\n", head->data);
	return (0);
}
