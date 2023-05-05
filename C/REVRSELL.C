/* Write a program for reversing a linked list. */

#include <stdio.h>
#include <conio.h>

struct singly_linkedlist
{
	int value;
	struct singly_linkedlist *next;
};

void append();
void reverse();
void display();

struct singly_linkedlist *start = NULL, *node = NULL;

void main()
{
	int choice = 0;
	while(choice != 4)
	{
		clrscr();
		printf("\n Main Menu Operations on Linked List)");
		printf("\n 1. Append");
		printf("\n 2. Reverse");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n Enter your choice (from 1 to 4): ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				append();
				break;
			case 2:
				reverse();
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

void append()
{
	struct singly_linkedlist *newnode = NULL;
	int num = 0;
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
}

void reverse()
{
	struct singly_linkedlist *currnode = NULL, *prevnode = NULL, *nextnode = NULL;
	currnode = start;
	prevnode = NULL;
	while(currnode != NULL)
	{
		nextnode = currnode -> next;
		currnode -> next = prevnode;
		prevnode = currnode;
		currnode = nextnode;
	}
	start = prevnode;
}

void display()
{
	node = start;
	while(node -> next !=  NULL)
	{
		printf("\n %d", node -> value);
		node = node -> next;
	}
	printf("\n %d", node -> value);
}