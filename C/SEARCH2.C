#include <stdio.h>
#include <conio.h>

void main()

{
    int a[5],i, n, k, num;
    clrscr();
    printf("Input any number for n:::\n\n");
    scanf("%d", &n);
    printf("Input numbers::\n\n");
    for(i=0;i<=n-1;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("Input a number you want to find:::\n\n");
    scanf("%d", &num);
    if(num>=a[0]  && num<=a[n-1])
    {
	for(i=0;i<=n-1;i++)
	{
		if(a[i] == num)
		{
			printf("Number Found:::");
			break;
		}

	}

    }
    if(i == n)
    {
	    printf("\n\n SORRYY!!! , Number Not Found");
    }

    getch();
}