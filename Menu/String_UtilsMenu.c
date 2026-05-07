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
                printf("Enter a string: ");
                scanf(" %[^\n]", str);
                printf("Length: %d\n", my_strlen(str));
                break;
            case 2:
                {
                    char dest[MAX_STRING_LEN];
                    printf("Enter source string: ");
                    scanf(" %[^\n]", str);
                    my_strcpy(dest, str);
                    printf("Copied string: %s\n", dest);
                }
                break;
            case 3:
                {
                    char dest[MAX_STRING_LEN];
                    printf("Enter destination string: ");
                    scanf(" %[^\n]", dest);
                    printf("Enter source string: ");
                    scanf(" %[^\n]", str);
                    my_strcat(dest, str);
                    printf("Concatenated string: %s\n", dest);
                }
                break;
            case 4:
                {
                    char str2[MAX_STRING_LEN];
                    printf("Enter first string: ");
                    scanf(" %[^\n]", str);
                    printf("Enter second string: ");
                    scanf(" %[^\n]", str2);
                    int cmp = my_strcmp(str, str2);
                    if (cmp == 0)
                        printf("Strings are equal.\n");
                    else if (cmp < 0)
                        printf("First string is less than second.\n");
                    else
                        printf("First string is greater than second.\n");
                }
                break;
            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str);
                toUpperCase(str);
                printf("Uppercase: %s\n", str);
                break;
            case 6:
                printf("Enter a string: ");
                scanf(" %[^\n]", str);
                toLowerCase(str);
                printf("Lowercase: %s\n", str);
                break;
            case 7:
                printf("Enter a string: ");
                scanf(" %[^\n]", str);
                reverseString(str);
                printf("Reversed: %s\n", str);
                break;
            case 8:
                printf("Enter a string: ");
                scanf(" %[^\n]", str);
                printf("Vowel count: %d\n", countVowels(str));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);  
}