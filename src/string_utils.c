#include "../include/string_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Concatenates src to the end of dest */
char* my_strcat(char* dest, const char* src)
{
    if (dest == NULL || src == NULL)
        return dest;

    char* d = dest;

    // move to end of dest
    while (*d != '\0')
        d++;

    // copy src
    while (*src != '\0')
    {
        *d = *src;
        d++;
        src++;
    }

    // add null terminator
    *d = '\0';

    return dest;
}

/* Reverses a string in place using two-pointer swapping */
void reverseString(char* s)
{
    if (s == NULL)
        return;

    int i = 0;
    int j = 0;

    // find length manually
    while (s[j] != '\0')
        j++;

    j--; // last character index

    // swap characters
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

/* Removes all occurrences of a character from a string */
void removeChar(char* s, char c)
{
    if (s == NULL)
        return;

    int i = 0, j = 0;

    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
        i++;
    }

    s[j] = '\0';
}// -- Copy each character from src to dest until and including '\0'. Return dest. The destination buffer must be large enough. -- //
char* my_strcpy(char* dest, const char* src){
    char* svd_dest = dest;
     while (*src != '\0'){ // starting a while loop that ends as soon as the source reaches its end 
         *dest = *src ; // coping the char from the source to destination 
         dest ++ ;
         src ++ ; 
         // adding +1 for both  the source and the destination to move a single step
     }
     *dest = '\0' ; 
     // adding the character constant  
     return svd_dest ;
}
// -- modifing upper-to-lower case 
void toLowerCase(char* s){
     while ( *s != '\0') // to make sure *s has moved all along the char and stops by its end
     {
        if (*s > 'A' && *s < 'Z'){ // cheacking whiether *s is between A-Z
            *s = *s + 32 ; // adding 32 to its ASC to make it lowercase 
        }
        s ++ ; // adding by one 
     } 
}
// -- Palindrome
int isPalindrome(const char* s){
     int i = 0 , j = strlen(s) -1 ; // creating 2 intgers one at the begening and on by the end of the char
     while (i < j) // to make sure we covered all the string without passing throgh all of it 
     {
        if(s[i] != s [j]){ // comparing 
            return 0;// returning 0 in case they aint equal 
        }
        i++ ; 
        j -- .
     }
      return 1 ; 
}

