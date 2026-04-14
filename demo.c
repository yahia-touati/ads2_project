#include <stdio.h>
#include "include/array.h"
#include "include/linked_list.h"
#include "include/stack.h"
#include "include/queue.h"
#include "include/file_utils.h"
#include "include/string_utils.h"
#include "Menu/Menu.h" 


int main() {
    int choice;
    do {
        printf("\n=== ADS2 PROJECT DEMO ===\n");
        printf("1. Arrays\n2. Linked Lists\n3. Stacks\n"
               "4. Queues\n5. File Handling\n6. String Utils\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: arrayMenu(); 
                break;
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