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
            else{
                printf("Error enqueuing value.\n");
            }
                break;
            case 2:
                if (isEmpty(&Q) == 1)
                {
                    printf("The queue is empty: \n");
                }
                else
                {
                    value = dequeue(&Q);
                    printf("Value %d dequeued from the queue successfully.\n", value);
                }
                break;
            case 3:
            if (isEmpty(&Q) == 1)
            {
                printf("The queue is empty: \n");
            }
            else
            {
                value = front(&Q);   
                printf("The first value in the queue is: %d\n", value);
            }
                break;
            case 4:
                  if (isEmpty(&Q) == 1)
            {
                printf("The queue is empty: \n");
            }
            else
            {
                value = rear(&Q);
                printf("The last value in the queue is: %d\n", value);
            }
                break;
        }
    } while(choice != 0);
}