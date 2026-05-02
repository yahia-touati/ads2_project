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