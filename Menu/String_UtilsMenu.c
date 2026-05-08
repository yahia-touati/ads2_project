#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../include/Menu.h"
#include "../include/string_utils.h"

void String_UtilsMenu() {
    int choice, n;
    char str[MAX_STRING_LEN];
    char dest[MAX_STRING_LEN];
    do {
        printf("\n=== String Utils Menu ===\n");
        printf(" 1.  String Length   2.  Copy String   3.  Copy part\n"
               " 4.  Concatenate     5.  Comparison    6.  Copmarison part\n"
               " 7.  Text larger     8.  Text Smaller  9.  Revers string\n"
               "10.  Vowles         11.  Consonants   12.  Word count\n"
               "13.  is Palindrome  14.  Remove char  15. Remove spaces\n"
               "16.  Sub string     17. Compare ingnore case\n");
        printf("0. Exit\nchoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                n = my_strlen(str);
                printf("The length of the text string is: %d\n", n);
                break;
            case 2:
                printf("Enter source string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; // Remove newline character
                my_strcpy(dest, str);
                printf("Copied string: %s\n", dest);
                break;
            case 3:
                break;
            case 4:
                printf("Enter the first string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; 
                printf("Enter the second string: ");
                fgets(dest, MAX_STRING_LEN, stdin);
                dest[strcspn(dest, "\n")] = '\0'; 
                if (my_strlen(str) + my_strlen(dest) > MAX_STRING_LEN)
                {
                    printf("Error There isn't rnough space\n");
                }
                else
                {
                    my_strcat(str, dest);
                    printf("%s\n",str);
                }
                break;
            case 5:
                printf("Enter the first string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; 
                printf("Enter the second string: ");
                fgets(dest, MAX_STRING_LEN, stdin);
                dest[strcspn(dest, "\n")] = '\0'; 
                int s = my_strcmp(str, dest);
                if(s == 0) 
                {
                    printf("The two series are identical\n");
                }  
                else
                {
                    printf("The two series are different\n");
                }            
                break;
            case 6:
                printf("Enter the number n: \n");
                scanf("%d", &n);
                printf("Enter the first string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; 
                printf("Enter the second string: ");
                fgets(dest, MAX_STRING_LEN, stdin);
                int x = my_strncmp(str, dest, n);
                if(x == 0) 
                {
                    printf("The two series are identical\n");
                }  
                else
                {
                    printf("The two series are different\n");
                }     
                break;
            case 7:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                toUpperCase(str);
                printf("The new text: %s\n", str);
                break;
            case 8:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(dest, MAX_STRING_LEN, stdin);
                dest[strcspn(dest, "\n")] = '\0';
                toLowerCase(dest);
                printf("The new text: %s\n", dest);
                break;
            case 9:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                reverseString(str);
                printf("Reversed string: %s\n", str);
                break;
            case 10:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                int count_vowels = countVowels(str);
                printf("Number of vowels is: %d", count_vowels);
                break;
            case 11:
                
                break;
            case 12:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                int word_count = countWords(str);
                printf("Nubmer of words is: %d", word_count);
                break;
            case 13:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                n = isPalindrome(str);
                if (n == 1){
                    printf("This text is symmetrical sentence\n");
                }
                else{
                    printf("This text is not symmetrical sentence\n");
                }
                break;
            case 14:
                printf("Enter the string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0';
                char c;
                printf("Enter the character: ");
                scanf("%s", &c);
                removeChar(str, c);
                printf("The new text: %s", str);
                break;
            case 15:
                
                break;
            case 16:
                printf("Enter the first string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; 
                printf("Enter the second string: ");
                fgets(dest, MAX_STRING_LEN, stdin);
                int start, len;
                printf("Enter the starting point: ");
                scanf("%d", &start);
                printf("Enter the length: ");
                scanf("%d", &len);
                substring(str, start, len, dest);
                printf("The latest instament in the series: %s\n", dest);
                break;
            case 17:
                printf("Enter the first string: ");
                while (getchar() != '\n');
                fgets(str, MAX_STRING_LEN, stdin);
                str[strcspn(str, "\n")] = '\0'; 
                printf("Enter the second string: ");
                fgets(dest, MAX_STRING_LEN, stdin);
                n = compareIgnoreCase(str, dest);
                if (n == 0){
                    printf("The two text are identical\n");
                } else if (n > 0){
                    printf("The first text string is longer than the second\n");
                }else{
                    printf("The second text string in longer than the first\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);  
}