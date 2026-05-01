#include <stdio.h>
#include "../include/Menu.h"
#include "../include/common.h"
#include "../include/array.h"


/* This function provides the functions available in the array */
void arrayMenu(int arr[], int *size) {
    int choice, value, index;
    do {
        printf("\n=== ARRAY MENU ===\n");
        printf("1. Entre values\t\t2. Initialize Sire\t3. Dispaly\n");
        printf("4. Insert element\t5. Delete element\t6. Search\n");
        printf("7. Sort\t\t\t8. Max Number\t\t9. Min number\n");
        printf("10. Sum\t\t\t11. Average\t\t12. Reverse\n");
        printf("13. Rotate left\t\t0. Back\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                ReadArray(arr, size);
                break;
            case 2:
                initArray(arr, size);
            case 3: 
                printArray(arr, *size);
                break;
             case 4:
                printf("Index and value: ");
                scanf("%d %d", &index, &value);
                insertAt(arr, size, index, value);
                break;
            case 5:
                printf("Entre the index: ");
                scanf("%d", &index);
                deleteAt(arr, size, index);
                break;
            case 6: searchMenu(arr, *size);
                break;
            case 7: SortMenu(arr, *size);
                break;
            case 8:
                int Max = findMax(arr, *size);
                printf("The lorges number is: %d", Max);
                break;
            case 9:
                int Min = findMin(arr, *size);
                printf("The smallest number is: %d", Min);
                break;
            case 10:
                int Sum = sumArray(arr, *size);
                printf("The sum of the elements in the array is: %d", Sum);
                break;
            case 11:
                double avrage = averageArray(arr, *size);
                printf("The average of element is: %.2lf\n", avrage);
                break;
            case 12:
                reverseArray(arr, *size);
                printArray(arr, *size);
                break;
            case 13:
            int k;
                printf("Entre number of positions to rotate left: ");
                scanf("%d", &k);
                rotateLeft(arr, *size, k);
                printf("Array rotated succesfully\n");
                printArray(arr, *size);
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
                printArray(arr, size);
                break;
            case 2:
                break;
            case 3:
                insertionSort(arr, size);
                printArray(arr, size);
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