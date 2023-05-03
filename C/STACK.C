#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
const int asize = 5;
int main()
{
	int a[asize], value, choice, top = -1, i, num;
	do
	{
		// clrscr();
		system("CLS");
		printf("\n\nPUSH. 1::");
		printf("\n\nDISPLAY. 2::");
		printf("\n\nPOP. 3::");
		printf("\n\nEXIT. 4::");
		printf("\n\nEnter your choice:::");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			if (top == 4)
			{
				printf("\n\nStack is Full!!");
			}
			else
			{
				printf("\n\nEnter a value::");
				scanf("%d", &value);
				top = top + 1;
				a[top] = value;
			}
			break;
		case 2:
			if (top == -1)
			{
				printf("\n\nStack is Empty::");
			}
			else
			{
				for (i = top; i >= 0; i--)
				{
					printf("\n\n%d", a[i]);
				}
			}
			break;
		case 3:
			if (top == -1)
			{
				printf("\n\nStack is Empty::");
			}
			else
			{
				num = a[top];
				top = top - 1;
				printf("\n\nDeleted value is %d ", num);
			}

			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\n\nInvalid Choice::");
			break;
		}
		printf("\n\nPress any key to continue::");
		getch();
	} while (choice != 4);
}