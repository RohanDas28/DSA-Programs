#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5],i, j, k, num;
    clrscr();
    printf("Input any 5 numbers\n\n");
    for(i=0;i<=4;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("Input a number you want to find:::\n\n");
    scanf("%d", &num);
    if(a[0] >= num && a[4] <= num)
    {
	for(i=0;i<=4;i++)
	{
		if(a[i] == num)
		{
			printf("Number Found:::");
			break;
		}

	}

    }
    if(i == 5)
    {
	    printf("\n\n SORRRYYYY , Number Not Found");
    }

    getch();
}