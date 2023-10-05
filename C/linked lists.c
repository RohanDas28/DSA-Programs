#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 2;
    newNode->next = NULL;
    head->next = newNode;

    // Add more nodes as needed...

    return 0;
}
