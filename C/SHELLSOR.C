/* Write a C program to implement (perform) shell sorting. */
#include <stdio.h>
#include <conio.h>

void main()
{
	int arr[8], i = 0, temp = 0, gap = 0, swap = 0;
	clrscr();
	printf("\n Enter 8 numbers: ");
	for(i = 0; i <= 7; i++)
	{
		scanf("%d", &arr[i]);
	}

	gap = 8 / 2;
	while(gap != 0)
	{
		do
		{
			swap = 0;
			for(i = 0; i < 8 - gap; i++)
			{
				if(arr[i] > arr[i + gap])
				{
					temp = arr[i];
					arr[i] = arr[i + gap];
					arr[i + gap] = temp;
					swap = 1;
				}
			}
		} while(swap == 1);
		gap = gap / 2;
	}

	printf("\n After sorting 8 numbers are: ");
	for(i = 0; i <= 7; i++)
	{
		printf(" %d ", arr[i]);
	}
}