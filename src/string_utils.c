#include "../include/string_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

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
/* A simple implementation of strcpy */
char* my_strcpy(char* dest, const char* src) { // dest is the destination string, src is the source string
    int i = 0; // Initialize index to 0

    while(src[i] != '\0') { // Loop until the end of the source string is reached
        dest[i] = src[i]; // Copy the character from source to destination
        i++; // Move to the next character
    }
    dest[i] = '\0'; // Add null terminator at the end of the destination
    return dest; // Return the destination string
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

/* A simple implementation of toUpperCase */
void toUpperCase(char* s) { // s is the input string that we want to convert to uppercase
    int i = 0; // Initialize index to 0

    while(s[i] != '\0') { // Loop until the end of the string is reached
        if(s[i] >= 'a' && s[i] <= 'z') { // Check if the character is a lowercase letter
            s[i] = s[i] - 32; // Convert lowercase to uppercase
        }
        i++; // Move to the next character
    }
}

// -- modifing upper-to-lower case 
void toLowerCase(char* s){
     while ( *s != '\0') // to make sure *s has moved all along the char and stops by its end
     {
        if (*s > 'A' && *s < 'Z'){ // cheacking whiether *s is between A-Z
            *s = *s + 32 ; // adding 32 to its ASC to make it lowercase 
        }
        s++ ; // adding by one 
     } 
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
/* Counts the number of words in a string */
int countWords(const char* s) { // s is the input string for which we want to count the number of words
    int i = 0; // Initialize index to 0
    int count = 0; // Initialize word count to 0
    int inWord = 0; // Flag to indicate whether we are currently in a word (1) or not (0)

    while(s[i] != '\0') { // Loop until the end of the string is reached

        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n') { // Check if the current character is not a whitespace character (space, tab, or newline)

            if(inWord == 0) { // If we are not currently in a word, this means we have found the start of a new word
                count++; // Increment the word count
                inWord = 1; // Set the inWord flag to 1 to indicate that we are now in a word
            }

        } else { // If the current character is a whitespace character, this means we have reached the end of a word (if we were in one)
            inWord = 0; // Set the inWord flag to 0 to indicate that we are no longer in a word
        }

        i++; // Move to the next character
    }

    return count; // Return the total word count
}

// -- Palindrome
int isPalindrome(const char* s){
     int i = 0 , j = my_strlen(s) - 1 ; // creating 2 intgers one at the begening and on by the end of the char
     while (i < j) // to make sure we covered all the string without passing throgh all of it 
     {
        if(s[i] != s [j]){ // comparing 
            return 0;// returning 0 in case they aint equal 
        }
        i++ ; 
        j --;
     }
      return 1 ; 
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
}


/* Extracts a substring from src starting at index start with length len and stores it in dest */
void substring(const char* src, int start, int len, char* dest)
{
    int i;
    int srclen =my_strlen(src); // Get the length of the source string
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

/* Compares two strings ignoring case */
int compareIgnoreCase(const char* a, const char* b)
{
    while (*a != '\0' && *b != '\0')
    {
        char ca = tolower(*a); // Convert character from string a to lowercase
        char cb = tolower(*b); // Convert character from string b to lowercase

        if (ca != cb) // If characters differ, return the difference
        {
            return ca - cb; // Return the difference of the ASCII values
        }
        a++;
        b++;
    }
    return 0; // Strings are identical (ignoring case)
}