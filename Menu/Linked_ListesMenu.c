#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/linked_list.h" 
#include "../include/common.h"

void Singly_LinkedListMenu()
{ 
    printf("Singly Linked List Menu\n");
}
void Doubly_LinkedListMenu()
{
    printf("Doubly Linked List Menu\n");
}
void Linked_ListMenu()
{
    int choice;
    do {
        printf("\n=== Linked List Menu ===\n");
        printf("1. Singly Linked List\n2. Doubly Linked List\n");
        printf("0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                Singly_LinkedListMenu();
                break;
            case 2:
                Doubly_LinkedListMenu();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
