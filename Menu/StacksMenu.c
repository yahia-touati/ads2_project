#include <stdio.h>
#include "../include/Menu.h"
#include "../include/stack.h"
#include "../include/common.h"

void StacksMenu()
{
    int choice, Value;
    Stack S;
    initStack(&S);
    do{
        printf("\n=== Stacks Menu ===\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Is Empty\n");
        printf("0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter a value: ");
                scanf("%d", &Value);
                if (push(&S, Value) == 1){
                    printf("Value stack successfully.\n");
                }else{
                    printf("Error stack value.\n");
                }
                break;
            case 2:
                if(is_Empty(&S) == 1)
                {
                    printf("The stack is empty \n");
                }
                else{
                    Value = pop(&S);
                    printf("Value %d poped from the stack successflly.\n", Value);
                }
                break;
            case 3:
                if(is_Empty(&S) == 1)
                {
                    printf("The stack is empty\n");
                }
                else{
                    Value = peek(&S);
                    printf("Value = %d", Value);
                }
                break;
            case 4:
                if (is_Empty(&S) == 1)
                {
                    printf("The stack is empty. \n");
                }
                else{
                    printf("The stack contains values\n");
                }
                break;
        }
    } while (choice != 0);
}