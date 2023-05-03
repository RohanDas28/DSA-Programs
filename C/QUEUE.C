#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int queue[5], front = -1, rear = -1, element = 0, choice = 0, i = 0;
	do
	{
		system("CLS");
		//clrscr();
		printf("\n Main Menu (Basic Operations On Queue)");
		printf("\n 1. ADD (INSERT)");
		printf("\n 2. DELETE (REMOVE)");
		printf("\n 3. DISPLAY");
		printf("\n 4. EXIT");
		printf("\n Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				if((rear == 4))
				{
					printf("\n Queue is full (queue overflow)");
				}
				else
				{
					printf("Enter an element to be added: ");
					scanf("%d", &element);
					rear = rear + 1;
					queue[rear] = element;
					if(front == -1)
					{
						front = 0;
					}
				}
			break;
			case 2:
				if(front == -1)
				{
					printf("Queue is empty (queue underflow)");
				}
				else
				{
					element = queue[front];
					if(front == rear)
					{
						front = -1;
						rear = -1;
					}
					else
					{
						front = front + 1;
					}
					printf("Deleted element is %d.", element);
				}
			break;
			case 3:
				if(front == -1)
				{
					printf("Queue is empty (queue underflow)");
				}
				else
				{
					printf("Queue elements: ");
					for(i = front; i <= rear; i++)
					{
						printf("\n %d", queue[i]);
					}
				}
			break;
			case 4:
				exit(0);
			break;
				default:
					printf("\n Invalid choice");
		}
			printf("\nPress any key to continue::");
			getch();
	} while(choice != 4);
}