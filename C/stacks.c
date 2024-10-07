#include <stdio.h>
#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void push(struct Stack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int main() {
    struct Stack stack;
    stack.top = -1;

    push(&stack, 1);
    push(&stack, 2);

    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));

    return 0;
}
