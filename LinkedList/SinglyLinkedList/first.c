#include "dsa.h"

int countnode();

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


	newnode = malloc(sizeof(struct node));
	newnode->data = 104;
	newnode->next = NULL;
	head->next->next = newnode;

	printf("%d\n", newnode->data);

	countnode(head);

	return (0);
}


int countnode(struct node *head)
{
	struct node *ptr;
	int count;

	count = 0;
	if (head == NULL)
		printf("List is empty\n");
	ptr = head;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("Number of nodes in this list is %d\n", count);

	return (count);
}
