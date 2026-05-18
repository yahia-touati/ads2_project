#include <stdio.h>
#include "include/array.h"
#include "include/linked_list.h"
#include "include/stack.h"
#include "include/queue.h"
#include "include/file_utils.h"
#include "include/string_utils.h"
#include "include/Menu.h" 


int main() {
    int choice, arr[MAX_1D], size = 0;
    int cols = 0;
    int rows = 0;
    int a[MAX_ROWS][MAX_COLS];
    do {
        printf("\n=== ADS2 PROJECT DEMO ===\n");
        printf("1. Arrays\n2. Matrices\n3. Linked Lists\n4. Stacks\n"
               "5. Queues\n6. File Handling\n7. String Utils\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: arrayMenu(arr, &size); 
                break;
            case 2: 
                MatricMenu(a, &cols, &rows);
                break;
            case 3: 
                Linked_ListMenu(); 
                break;
            /*case 3: StacksMenu(); break;
            case 4: QueuesMenu(); break;*/
            case 6: 
                File_HandlingMenu();
                break;
            case 7: 
                String_UtilsMenu(); 
                break;
            default:
                printf("Invalid choice! Please try again.\n"); 
        }
    } while (choice != 0);
    return 0;
}