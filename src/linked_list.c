#include "../include/linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* --- Singly Linked List --- */

/* Initializes an empty linked list */
void initList(List* L)
{
    L->head = NULL;
    L->size = 0;
}

/* Function to insert a node at the beginning of a linked list */
int insertBeginning(List* L, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node)); // Allocate memory for the new node

    if (newNode == NULL) {
        return -1; // Failed to allocate memory
    }

    newNode->data = value; // Set the data of the new node
    newNode->next = L->head; // Point the new node's next to the current head of the list
    L->head = newNode; // Update the head of the list to the new node

    return 1; // Successfully inserted at the beginning
}

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
/*Deletes the first node of the linked list and returns its value*/
int deleteBeginning(List* L)
{
    if (L == NULL || L->head == NULL)
        return -1; // indicate failure
    Node* temp = L->head;
    int value = temp->data;
    L->head = L->head->next;
    free(temp);
    return value; // return deleted value
}

/* Deletes the last node of the linked list and returns its value */
int deleteEnd(List* L)
{
    // Case 1: empty list
    if (L->head == NULL)
        return -1; // or any error value

    // Case 2: only one node
    if (L->head->next == NULL)
    {
        int value = L->head->data;
        free(L->head);
        L->head = NULL;
        L->size--;
        return value;   // return deleted value
    }

    // Case 3: more than one node
    Node* current = L->head;

    // Traverse until current->next->next == NULL
    while (current->next->next != NULL)
    {
        current = current->next;
    }

    // current is now the node before the last
    Node* temp = current->next;
    int value = temp->data;

    current->next = NULL; // unlink last node
    free(temp);           // free memory
    L->size--;

    return value;    // return deleted value
}

/* Function to delete a node by value from a linked list */
int deleteByValue(List* L, int value) {
    Node* current = L->head; // Start from the head of the list
    Node* prev = NULL; // To keep track of the previous node

    while (current != NULL && current->data != value) {
        prev = current; // Move prev to current
        current = current->next; // Move to the next node
    }

    if (current == NULL) {
        return 0; // Value not found in the list
    }

    // Value found, delete the node
    if (prev == NULL) {
        L->head = current->next; // Deleting the head node
    } 
    else {
        prev->next = current->next; // Bypass the current node
    }

    free(current);
    return 1; // Successfully deleted the node with the given value
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
/* Reverses the linked list in place */
void reverseList(List* L)
{
    Node* prev = NULL;
    Node* current = L->head;
    Node* next = NULL;
    while(current != NULL)
    {
        next = current->next; // sort next node
        current->next = prev; // reverse link
        prev = current; // move prev forward
        current = next; // move current forward
    }
    L->head = prev; // update head to new first node
}

/* Sorts the linked list using bubble sort */
void sortListBubble(List* L)
{
    // If list is empty or has one element → already sorted
    if (L->head == NULL || L->head->next == NULL)
        return;

    int swapped;
    Node* ptr1;
    Node* lptr = NULL; // marks the sorted part at the end

    do
    {
        swapped = 0;
        ptr1 = L->head;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                // swap data
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;

                swapped = 1;
            }
            ptr1 = ptr1->next;
        }

        lptr = ptr1; // last element is now sorted
    } while (swapped);
}

/* Merges two sorted linked lists into a third one */
void mergeSortedListe(List *A, List* B, List* result)
{
    Node* currentA = A->head;
    Node* currentB = B->head;
    Node* taileresult = NULL;
    if (currentA == NULL) // if A is empty, result is just B
    {
        result->head = currentB;
        return;
    }
    else if (currentB ==NULL) // if A is empty, result is just B
    {
        result->head = currentA;
        return;
    }
    if (currentA->data <= currentB->data) // initialize result head to smaller first node
    {
        result->head = currentA;
        currentA = currentA->next;
    }
    else{ // initialize result head to smaller first node
        result->head = currentB;
        currentB = currentB->next;
    }
    taileresult = result->head;
    while (currentA != NULL && currentB != NULL) // merge until one list is exhausted
    {
        if (currentA->data <= currentB->data)
        {
            taileresult->next = currentA;
            currentA = currentA->next;
        }
        else{
            taileresult->next = currentB;
            currentB = currentB->next;
        }
        taileresult = taileresult->next;
    }
    if (currentA != NULL)
    {
        taileresult->next = currentA;
    }
    else if (currentB != NULL)
    {
        taileresult->next = currentB;
    }
}
/* --- Doubly Linked List --- */

/* Function to initialize a doubly linked list */
void initListDLL(DLL* L) {
    L->head = NULL; // Initialize head pointer to NULL
    L->tail = NULL; // Initialize tail pointer to NULL
    L->size = 0; // Initialize size to 0
}

/* Inserts a node at the end of a doubly linked list */
int insertEndDLL(DLL* L, int value)
{
    if (L == NULL)
        return 0;

    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    if (newNode == NULL)
        return 0;

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    // empty list
    if (L->head == NULL)
    {
        L->head = newNode;
        L->tail = newNode;
        return 1;
    }

    // link at end
    newNode->prev = L->tail;
    L->tail->next = newNode;
    L->tail = newNode;

    return 1;
}
/* Deletes a node with the specified value from a doubly linked list */
int  deleteByValueDLL(DLL *L, int value)
{
    if (L == NULL || L->head == NULL)
        return -1 -1;
    DNode* current = L->head;
    while (current != NULL)
    {
        if (current->data == value)
        {
            if (current->prev != NULL)
            {
                current->prev->next = current->next;
            }
            else // deleting head
            {
                L->head = current->next;
                if (L->head != NULL)
                    L->head->prev = NULL;
            }
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            else // deleting tail
            {
                L->tail = current->prev;
                if (L->tail != NULL)
                    L->tail->next = NULL;
            }
            free(current);
            return value;
        }
    }
}



