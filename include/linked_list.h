#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "common.h"

/* --- Singly Linked List --- */
int insertAtPosition(List* L, int pos, int value);
void displayList(List* L);

/* --- Doubly Linked List --- */
int insertEndDLL(DLL* L, int value);

/* --- Stack --- */
int push(Stack* S, int value);




#endif