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

/* *** String Utils *** */
void String_UtilsMenu();

/* *** Bonus: Dataset statistical analysis *** */
float averageByField(Record arr[], int count);
int filterByCondition(Record arr [], int count, float threshold, Record out[]);

#endif