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