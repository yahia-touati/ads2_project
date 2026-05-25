#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/linked_list.h" 
#include "../include/common.h"

void Singly_LinkedListMenu();
void Doubly_LinkedListMenu();
void Linked_ListMenu()
{
    int choice;
    do {
        printf("\n=== Linked List Menu ===\n");
        printf("1. Singly Linked List\n2. Doubly Linked List\n");
        printf("0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                Singly_LinkedListMenu();
                break;
            case 2:
                Doubly_LinkedListMenu();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}
void Singly_LinkedListMenu()
{ 
    int choice, value, pos;
    List L;
    initList(&L);
    do {
        printf("\n=== Singly Linked List Menu ===\n");
        printf("1. Insert at Beginning  2. Insert at End   3. Insert at Position\n"
               "4. Delete Beginning     5. Delete End     6. Delete by value\n"
               "7. Search by Value      8. Display List      9. Reverse List\n"
               "10. Sort List (Bubble) 11. Merge Sorted Lists\n");
        printf("0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                if (insertBeginning(&L, value) == 1){
                    printf("Value inserted successfully at the beginning.\n");
                }else{
                    printf("Error inserting value at the beginning.\n");
                }
                break;
            case 2:
               printf("Enter value to insert at the end: ");
               scanf("%d", &value);
               insertEnd(&L, value);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Select the location where you want to enter the value: ");
                scanf("%d", &pos);
                if (insertAtPosition(&L, pos, value) == 1)
                {
                    printf("Added successfully: ");
                }
                else{
                    printf("Error :");
                }
                break;
            case 4:
                value = deleteBeginning(&L);
                if (value != -1){
                    printf("Deleted value: %d\n", value);
                }else{
                    printf("Error deleting value from the beginning.\n");
                } 
                break;
            case 5:
                value = deleteEnd(&L);
                if (value != -1){
                    printf("Deleted value: %d\n", value);
                }else{
                    printf("Error deleting value from the end.\n");
                }
                break;
            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                if (deleteByValue(&L, value) == 1){
                    printf("Value deleted successfully.\n");
                }else{
                    printf("Value not found in the list.\n");
                }
                break;
            case 7: 
                printf("Enter value to search: ");
                scanf("%d", &value);
                Node* foundNode = searchValue(&L, value);
                if (foundNode != NULL){
                    printf("Value found in the list.\n");
                }else{
                    printf("Value not found in the list.\n");
                }
                break;
            case 8:
                printf("Linked List: ");
                displayList(&L);
                break;
            case 9:
                reverseList(&L);
                printf("Linked List reversed successfully.\n");
                displayList(&L);
                break;
            case 10:
                sortListBubble(&L);
                printf("Linked List sorted successfully.\n");
                displayList(&L);
                break;
            case 11:
                    {
                        List A, B, result;
                        initList(&A);
                        initList(&B);
                        initList(&result);
                        printf("Enter number of elements for List A: ");
                        int nA;
                        scanf("%d", &nA);
                        printf("Enter %d sorted values for List A:\n", nA);
                        for (int i = 0; i < nA; i++) {
                            int val;
                            scanf("%d", &val);
                            insertEnd(&A, val);
                        }
                        printf("Enter number of elements for List B: ");
                        int nB;
                        scanf("%d", &nB);
                        printf("Enter %d sorted values for List B:\n", nB);
                        for (int i = 0; i < nB; i++) {
                            int val;
                            scanf("%d", &val);
                            insertEnd(&B, val);
                        }
                        mergeSortedListe(&A, &B, &result);
                        printf("Merged Sorted List: ");
                        displayList(&result);
                    }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        } 
    } while (choice != 0);
}

void Doubly_LinkedListMenu()
{
    int choice, value;
    DLL L;
    initListDLL(&L); 
    do{   
        printf("=== Doubly Linked List Menu ===\n");
        printf("1. Insert at Beginning  2. Insert at End   3. Delete by value\n"
            "4. Display Forward     5. Display Backward\n");
        printf("0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                if (insertBeginningDLL(&L, value) == 1){
                    printf("Value inserted successfully at the beginning.\n");
                }else{
                    printf("Error inserting value at the beginning.\n");   
                }
                break;
            case 2:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                if (insertEndDLL(&L, value) == 1){
                    printf("Value inserted successfully at the end.\n");
                }else{
                    printf("Error inserting value at the end.\n");
                }
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                if (deleteByValueDLL(&L, value) != -1){
                    printf("Value deleted successfully.\n");
                }else{
                    printf("Value not found in the list.\n");
                }
                break;
            case 4:
                printf("Doubly Linked List (Forward): ");
                displayForwardDLL(&L);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice! Please try again.\n");  
        }
    } while (choice != 0);
}