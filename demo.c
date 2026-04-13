#include <stdio.h>
#include "include/array.h"
#include "include/linked_list.h"
#include "include/stack.h"
#include "include/queue.h"
#include "include/file_utils.h"
#include "include/string_utils.h"

void SortMenu();
void searchMenu();

void arrayMenu() {
    int choice, arr[MAX_1D], size = 0, value, index;
    do {
        printf("\n=== ARRAY MENU ===\n");
        printf("1. Insert element\n2. Delete element\n"
               "3. Search\n4. Sort\n5. Display\n0. Back\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Index and value: ");
                scanf("%d %d", &index, &value);
                insertAt(arr, &size, index, value);
                break;
            case 2:
                printf("Entre the index: ");
                scanf("%d", &index);
                deleteAt(arr, &size, index);
                break;
            case 3: searchMenu();
                break;
            case 4: SortMenu();
                break;
            case 5: printArray(arr, size);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
void searchMenu()
{
    int choice, arr[MAX_1D], value, size = 0;
    do{
        printf("\n=== Searche Manu ===\n");
        printf("1. Linear Search\n2. Binary Search\n0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Value: ");
                scanf("%d %d", &value);
                linearSearch(arr, size, value);
                break;
            case 2:
                printf("Entre the value you are looking for: ");
                scanf("%d", &value);
                binarySearch(arr, size, value);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
void SortMenu()
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
                /* code */
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(select != 0);
}

int main() {
    int choice;
    do {
        printf("\n=== ADS2 PROJECT DEMO ===\n");
        printf("1. Arrays\n2. Linked Lists\n3. Stacks\n"
               "4. Queues\n5. File Handling\n6. String Utils\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: arrayMenu(); break;
            /*case 2: Linked_ListesMenu(); break;
            case 3: StacksMenu(); break;
            case 4: QueuesMenu(); break;
            case 5: File_HandlingMenu(); break;
            case 6: String_UtilsMenu(); break;*/
            default:
                printf("Invalid choice! Please try again.\n"); 
        }
    } while (choice != 0);
    return 0;
}