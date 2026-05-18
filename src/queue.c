#include "../include/queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*--- queue ---*/

/*Pushes a value onto the top of the stack */
void initQueue(Queue* Q)
{
    if (Q == NULL)
        return;

    Q->front = NULL;
    Q->rear = NULL;
}
int enqueue(Queue* Q, int value)
{
    if (Q == NULL)
        return -1;
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL)
        return -1;
    newNode->data = value;
    newNode->next = NULL;
    if (Q->front == NULL)
    {
        Q->front = newNode;
        Q->rear = newNode;
    }
    else{
        Q->rear->next = newNode;
        Q->rear = newNode;
    }
    return 1;
}

/* Removes and returns the value at the front of the queue */
int front(Queue* Q)
{
    // Check if queue is empty
    if (Q->front == Q->rear)
        return -1; // sentinel value (error)

    return Q->front->data;  // front is the first valid element
}
int rear(Queue* Q)
{
    // Check if queue is empty
    if (Q->front == Q->rear)
        return -1; // sentinel value (error)

    return Q->rear->data;  // rear is the last valid element, so we need to adjust for the circular nature
}