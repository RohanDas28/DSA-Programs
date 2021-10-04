#include<stdio.h>
#include<stdlib.h>

// struct node of linked list
struct Node
{
    int data;
    struct Node * next;
};

// Function to create a linked list
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    
    // Dynamically allocating memory for the linked list in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 11;
    second->next = third;

    //Terminate the list at the third node
    third->data = 66;
    third->next = NULL;

    

    return 0;
}   