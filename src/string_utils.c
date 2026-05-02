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
}