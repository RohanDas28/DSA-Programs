// // C program for array implementation of stack
// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>

// // A structure to represent a stack
// struct Stack
// {
//     int top;
//     unsigned capacity;
//     int *array;
// } * s;

// int isFull(struct Stack *stack)
// {
//     if (stack->top == stack->capacity - 1)
//     {
//         return 1;
//     }

//     return 0;
// }

// int isEmpty(struct Stack *stack)
// {
//     if (stack->top == -1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int main()
// {
//     // struct stack s;
//     s->capacity = 80;
//     s->top = -1;
//     s->array = (int *)malloc(s->capacity * sizeof(int));

//     if (isEmpty(s))
//     {
//         printf("stack is Empty");
//     }
//     else
//     {
//         printf("Stack is not Empty");
//     }

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};


int isEmpty( struct stack ptr)
{
    if (ptr.top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int isFull( struct stack ptr)
{
    if (ptr.top == ptr.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *)malloc(s.size* sizeof(int));

    // s.arr

    if (isEmpty(s))
    {
        printf("Stack is Empty");
    }
    else{
        printf("Stack is Full");
    }
    
    printf("\n");

    if (isFull(s))
    {
        printf("Stack is Full");
    }
    else{
        printf("Stack is Empty");
    }
    
    return 0;
}