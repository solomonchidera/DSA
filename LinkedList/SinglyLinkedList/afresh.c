#include "dsa.h"

struct Node
{
	int data;
	struct Node *next;
};

int main(void)
{

	int targetValue = 48;

	struct Node *head = NULL;
	struct Node *current;
	struct Node *newnode;
	newnode = malloc(sizeof(struct Node));
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

	while (current != NULL)
	{
		if (current-> == targetValue)
		{
			printf("Found it: %d\n", current->data);
			break;
		}
		current = current->next;
	}

	if (current == NULL)
	{
		printf("Element %d found in the list.\n", targetValue);
	}

	return (0);
}
