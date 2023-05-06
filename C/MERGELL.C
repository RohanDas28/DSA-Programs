/* Write a program for creating and merging two sorted linked lists. */

#include <stdio.h>
#include <conio.h>

struct singly_linkedlist
{
	int value;
	struct singly_linkedlist *next;
};

void create();
void merge();
void display();

struct singly_linkedlist *start1 = NULL, *start2 = NULL, *start3 = NULL;

void main()
{
	int choice = 0;
	while(choice != 4)
	{
		clrscr();
		printf("\n Main Menu (Operations on Linked List)");
		printf("\n 1. Create");
		printf("\n 2. Merge");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n Enter your choice (from 1 to 4): ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				create();
				break;
			case 2:
				merge();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("\n Invalid choice");
		}
		printf("\n Press any key to continue...");
		getch();
	}
}

void create()
{
	struct singly_linkedlist *newnode = NULL, *start = NULL, *node = NULL;
	int num = 0;
	char ans = 'y';
	while(ans == 'y')
	{
		printf("\n Enter a number to append in the list: ");
		scanf("%d", &num);
		newnode = (struct singly_linkedlist *) malloc(sizeof(struct singly_linkedlist));
		newnode -> value = num;
		newnode -> next = NULL;
		if(start == NULL)
		{
			start = newnode;
		}
		else
		{
			node = start;
			while(node -> next != NULL)
			{
				node = node -> next;
			}
			node -> next = newnode;
		}
		printf("\n Do you want to continue? ");
		ans = getche();
	}

	if(start1 == NULL)
	{
		start1 = start;
	}
	else
	{
		start2 = start;
	}
}

void merge()
{
	struct singly_linkedlist *node1 = NULL, *node2 = NULL, *node3 = NULL, *newnode = NULL;
	node1 = start1;
	node2 = start2;
	while(node1 != NULL && node2 != NULL)
	{
		newnode = (struct singly_linkedlist *) malloc(sizeof(struct singly_linkedlist));
		if(node1 -> value < node2 -> value)
		{
			newnode -> value = node1 -> value;
			node1 = node1 -> next;
		}
		else if(node1 -> value > node2 -> value)
		{
			newnode -> value = node2 -> value;
			node2 = node2 -> next;
		}
		else
		{
			newnode -> value = node1 -> value;
			node1 = node1 -> next;
			node2 = node2 -> next;
		}
		newnode -> next = NULL;

		if(start3 == NULL)
		{
			start3 = newnode;
			node3 = start3;
		}
		else
		{
			node3 -> next = newnode;
			node3 = node3 -> next;
		}
	}

	while(node1 != NULL)
	{
		newnode = (struct singly_linkedlist *) malloc(sizeof(struct singly_linkedlist));
		newnode -> value = node1 -> value;
		newnode -> next = NULL;
		node3 -> next = newnode;
		node3 = node3 -> next;
		node1 = node1 -> next;
	}

	while(node2 != NULL)
	{
		newnode = (struct singly_linkedlist *) malloc(sizeof(struct singly_linkedlist));
		newnode -> value = node2 -> value;
		newnode -> next = NULL;
		node3 -> next = newnode;
		node3 = node3 -> next;
		node2 = node2 -> next;
	}
}

void display()
{
	struct singly_linkedlist *node = NULL;
	printf("\n First Linked List");
	node = start1;
	while(node -> next !=  NULL)
	{
		printf("\n %d", node -> value);
		node = node -> next;
	}
	printf("\n %d", node -> value);

	printf("\n Second Linked List");
	node = start2;
	while(node -> next !=  NULL)
	{
		printf("\n %d", node -> value);
		node = node -> next;
	}
	printf("\n %d", node -> value);

	printf("\n List After Merging of Two Linked Lists");
	node = start3;
	while(node -> next !=  NULL)
	{
		printf("\n %d", node -> value);
		node = node -> next;
	}
	printf("\n %d", node -> value);
}