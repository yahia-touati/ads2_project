#include "../include/linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* --- Singly Linked List --- */

/* Inserts a node at a given position in a linked list */
int insertAtPosition(List* L, int pos, int value)
{
    if (L == NULL || pos <= 0)
        return 0;

    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL)
        return 0;

    newNode->data = value;
    newNode->next = NULL;

    // insert at head
    if (pos == 1)
    {
        newNode->next = L->head;
        L->head = newNode;
        return 1;
    }

    Node* current = L->head;

    // move to node at position pos - 1
    for (int i = 1; i < pos - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        free(newNode);
        return 0;
    }

    newNode->next = current->next;
    current->next = newNode;

    return 1;
}
/* Prints all elements of the linked list */
void displayList(List* L)
{
    if (L == NULL)
        return;

    Node* current = L->head;

    while (current != NULL)
    {
        printf("%d", current->data);

        if (current->next != NULL)
            printf(" -> ");
        else
            printf(" -> NULL");

        current = current->next;
    }

    printf("\n");
}