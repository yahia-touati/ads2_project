#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../include/Menu.h"
#include "../include/string_utils.h"

void String_UtilsMenu() {
    int choice;
    char str[MAX_STRING_LEN];
    do {
        printf("\n=== String Utils Menu ===\n");
        printf("1. String Length\t2. Copy String\t3. Concatenate\n");
        printf("4. Compare Strings\t5. To Uppercase\t6. To Lowercase\n");
        printf("7. Reverse String\t8. Count Vowels\t9. Count Words\n");
        printf("10. Check Palindrome\t11. Remove Character\t12. Remove Spaces\n");
        printf("13. Compare Ignore Case\t0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                break;
            case 2:
                printf("Enter source string: ");
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; // Remove newline character
                char dest[MAX_STRING_LEN];
                my_strcpy(dest, str);
                printf("Copied string: %s\n", dest);
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
           
                break;
            case 7:
                break;
            case 8:
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);  
}