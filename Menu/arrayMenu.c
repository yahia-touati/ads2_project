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
        printf("13. Rotate left\t\t14. Dynamic Array\t0. Back\nChoice: ");
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
            case 14:
                DynamicArray(arr, *size);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
void DynamicArray(int arr[], int size)
{
    int capacity;
    do{
        printf("=== Dynamic Array ===\n");
        printf("1. Create Dynamic Array\n2. Fill Dynamic Array\n"
            "3. Print Dynamic Array\n4. Resize Dynamic Array\n5. Free Dynamic Array\n0. Back\nChoice: ");
        scanf("%d", &capacity);
        switch (capacity) {
            case 1:
                printf("Entre the capacity of the dynamic array: ");
                scanf("%d", &capacity);
                int* arr = createDynamicArray(capacity);
                if (arr != NULL) {
                    printf("Dynamic array created with capacity %d.\n", capacity);
                } else {
                    printf("Failed to create dynamic array. Please try again.\n");
                }
                break;
            case 2:
                if (arr != NULL) {
                    printf("Enter %d integers:\n", capacity);
                    fillArray(arr, capacity);
                } else {
                    printf("Please create a dynamic array first.\n");
                }
                break;
            case 3:
                if (arr != NULL) {
                    printf("Dynamic Array: ");
                    printArray(arr, capacity);
                } else {
                    printf("Please create a dynamic array first.\n");
                }
                break;
            case 4:
                if (arr != NULL) {
                    int newCapacity;
                    printf("Enter new capacity: ");
                    scanf("%d", &newCapacity);
                    int* newArr = resizeArray(arr, newCapacity);
                    if (newArr != NULL) {
                        arr = newArr;
                        capacity = newCapacity;
                        printf("Dynamic array resized to capacity %d.\n", newCapacity);
                    } else {
                        printf("Failed to resize dynamic array. Please try again.\n");
                    } }
                break; 
            case 5:
                if (arr != NULL) {
                    freeArray(&arr);
                    arr = NULL;
                    printf("Dynamic array freed successfully.\n");
                } else {
                    printf("No dynamic array to free. Please create one first.\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");    
        }
    }while(capacity != 0);
}
void searchMenu(int arr[], int size){
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