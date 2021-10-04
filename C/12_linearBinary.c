#include <stdio.h>
#include <stdlib.h>



int BinarySearch(int arrb[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arrb[mid] == element)
        {
            return mid;
        }
        if (arrb[mid] < element )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}



int linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    // linear
    // int arrl[] = {12, 34, 5, 6, 7, 8, 45, 23, 4, 57, 9};
    // int size = sizeof(arrl) / sizeof(int);
    // int element;
    // printf("Enter the Element to get the index of: \n");
    // scanf("%d", &element);
    // int found = linear(arrl, size, element);
    // printf("The element %d is found at position %d ", element, found);

    // BinarySearch
    int arrb[] = {1, 2, 3, 5, 4, 12, 13, 14, 21, 22, 23, 24, 31, 32, 34};
    int sizeb = sizeof(arrb) / sizeof(int);
    int elementb = 24;
    int foundb = BinarySearch(arrb, sizeb, elementb) ;
    printf("The element %d is found at position %d ", elementb, foundb);

    return 0;

}