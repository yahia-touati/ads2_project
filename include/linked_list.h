#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "common.h"

/* --- Singly Linked List --- */
int insertAtPosition(List* L, int pos, int value);
void displayList(List* L);
int deleteBeginning(List* L);
void reverseList(List* L);

/* --- Doubly Linked List --- */
void initListDLL(DLL* L);
int insertEndDLL(DLL* L, int value);
int insertEndDLL(DLL* L, int value);
int deleteByValueDLL(DLL* L, int value);
void displayForwardDLL(DLL* L);
void displayBackwardDLL(DLL* L);
void mergeSortedListe(List *A, List* B, List* result);


#endif