#ifndef MENU_H
#define MENU_H
#include "common.h"
#include "file_utils.h"

/* *** Menu array *** */
void arrayMenu(int arr[], int *size);
void SortMenu(int arr[], int size);
void searchMenu(int arr[], int size);
void sortEntireArray(int arr[], int size);
void sort_quick(int arr[], int size);
void MatricMenu(int a[][MAX_COLS], int *cols, int *rows);
void DynamicArray(int arr[], int size);

/* *** Linked List Menu *** */
void Linked_ListMenu();
void Singly_LinkedListMenu();
void Doubly_LinkedListMenu();

/* *** String Utils *** */
void String_UtilsMenu();

/* *** Bonus: Dataset statistical analysis *** */
float averageByField(Record arr[], int count);
int filterByCondition(Record arr [], int count, float threshold, Record out[]);

/* *** Queues Menu *** */
void QueuesMenu();

/* *** Stacks Menu *** */
void StacksMenu();

#endif