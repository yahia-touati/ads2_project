#include "../include/stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* --- Stack --- */

/* Pushes a value onto the top of the stack */
int push(Stack* S, int value)
{
    if (S == NULL)
        return -1;

    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL)
        return -1;

    newNode->data = value;
    newNode->next = S->top;
    S->top = newNode;

    return 1;
}
/* Returns the value at the top of the stack without removing it */
int pop(Stack* S)
{
    if (S == NULL || S->top ==NULL)
        return -1;
    Node* temp = S->top;
    int value = temp->data;
    S->top = S->top->next;
    free(temp);
    return value;
}

/* Returns the value at the top of the stack without removing it */
int peek(Stack* S)
{
    if (S->top == NULL) {
        printf("Stack is empty.\n");
        return -1; // Return -1 to indicate stack is empty
    }
    return S->data[S->top];
}

/* Function to check if the stack is empty */
int isEmpty(Stack* S) {
    return S->top == NULL; // Returns 1 if the stack is empty, 0 otherwise
}