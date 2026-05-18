#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/queue.h"
#include "../include/common.h"

void QueuesMenu()
{ 
    int choice, value;
    Queue Q;
    initQueue(&Q);
    do{
    printf("\n=== Queues Menu ===\n");
    printf("1. Enqueue  2. Dequeue\n3. Front    4. Rear\n");
    printf("0. Back\nChoice: ");
    scanf("%d", &choice);
    switch  (choice)
    {
        case 1:
            printf("Enter value to enqueue:");
            scanf("%d", &value);
        if (enqueue(&Q, value) == 1)
            printf("Value enqueued successfully.\n");
        else
            printf("Error enqueuing value.\n");
            break;
        case 2:
            

    }
    } while(choice != 0);


}