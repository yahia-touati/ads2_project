#include "../include/string_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Returns the length of a string */
int my_strlen(const char* s)
{
    int i = 0;
    while (s[i] != '\0')  // Loop until we reach the null terminator
    {
        i++;
    }
    return i;   // Return the length of the string
}

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

/* Compares two strings lexicographically */
int my_strcmp(const char* a, const char* b)
{
int i = 0;
while(a[i] != '\0' && b[i] != '\0') // Loop until the end of either string
{
    if (a[i] != b[i]) // If characters differ, return the difference
    {
        return a[i] - b[i]; // Return the difference of the ASCII values
    }
    i++;
}
return a[i] - b[i]; // If we reached the end of one string, return the difference (handles cases where one string is a prefix of the other)
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

/* Counts the number of vowels in a string */
int countVowels(const char* s)
{
    int count = 0;
    int i = 0;
    while (s[i] != '\0')  // Loop until we reach the null terminator
    {
        char c = tolower(s[i]);  // Convert character to lowercase for case-insensitive comparison
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')  // Check if the character is a vowel
        {
            count++;  // Increment the vowel count
        }
        i++;
    }
    return count;  // Return the total count of vowels
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

/* Extracts a substring from src starting at index start with length len and stores it in dest */
void substring(const char* src, int start, int len, char* dest)
{
    int i;
    int srclen =strlen(src); // Get the length of the source string
    if (start < 0 || start + len > srclen) // Check for valid start and length
    {
        dest[0] = '\0'; // If invalid, return an empty string
        return;
    }
    for (i = 0; i < len; i++) // Copy the substring to the destination
    {
        dest[i] = src[start + i];
    }
    dest[len] = '\0'; // Null-terminate the destination string
}

