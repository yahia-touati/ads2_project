#include <stdio.h>
#include "../include/Menu.h"
#include "../include/common.h"
#include "../include/array.h"


/* This function provides the functions available in the array */
void arrayMenu(int arr[], int *size) {
    int choice, value, index;
    do {
        printf("\n=== ARRAY MENU ===\n");
        printf("1. Insert element\n2. Delete element\n"
               "3. Search\n4. Sort\n5. Display\n6. Enter values\n"
               "7. Max Number\n8. Min number\n0. Back\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Index and value: ");
                scanf("%d %d", &index, &value);
                insertAt(arr, size, index, value);
                break;
            case 2:
                printf("Entre the index: ");
                scanf("%d", &index);
                deleteAt(arr, size, index);
                break;
            case 3: searchMenu(arr, *size);
                break;
            case 4: SortMenu(arr, *size);
                break;
            case 5: 
                printArray(arr, *size);
                break;
            case 6:
                ReadArray(arr, size);
                break;
            case 7:
                int Max = findMax(arr, *size);
                printf("The lorges number is: %d", Max);
                break;
            case 8:
                int Min = findMin(arr, *size);
                printf("The smallest number is: %d", Min);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
void searchMenu(int arr[], int size)
{
    int choice, value;
    do{
        printf("\n=== Searche Manu ===\n");
        printf("1. Linear Search\n2. Binary Search\n0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Value: ");
                scanf("%d", &value);
                int s = linearSearch(arr, size, value);
                if (s != -1)
                {
                    printf("The location of the number is: %d\n", s + 1);
                } else  {
                    printf("This number does not exist\n");
                }
                printf("%d", s);
                break;
            case 2:
                mergeSort(arr, 0, size - 1);
                printf("Entre the value you are looking for: ");
                scanf("%d", &value);
                int result = binarySearch(arr, size, value);
                if (result != -1)
                {
                    printf("Element found at index: %d\n", result + 1);
                } else {
                    printf("Element not found!\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
void SortMenu(int arr[], int size)
{
    int select;
    do {
        printf("\n=== Sotr Menu ===\n");
        printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n"
                "4. Merge Sort\n5. Quick Sort\n0. Back\nChoice: ");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                bubbleSort(arr, size);
                break;
            case 2:
                break;
            case 3:
                insertionSort(arr, size);
                break;
            case 4:
                sortEntireArray(arr, size);
                printArray(arr, size);
                break;
            case 5:
                sort_quick(arr, size);
                printArray(arr, size);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(select != 0);
}
void sortEntireArray(int arr[], int size)
{
    mergeSort(arr, 0, size - 1);
}
void sort_quick(int arr[], int size)
{
    quickSort(arr, 0, size - 1);
}