
#include "../include/file_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Appends a record to a binary file */
int writeRecord(const char* filename, Record* r)
{
    if (filename == NULL || r == NULL)
        return -1;

    FILE* fp = fopen(filename, "ab");
    if (fp == NULL)
        return -1;

    size_t written = fwrite(r, sizeof(Record), 1, fp);
    if (written != 1)
    {
        fclose(fp);
        return -1;
    }

    fclose(fp);
    return 1;
}

/* Reads a record at a specific index from a binary file */
int countRecords(const char* filename)
{
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL)
        return -1; // error opening file

    // Move to end of file
    fseek(fp, 0, SEEK_END);

    // Get total size in bytes
    long size = ftell(fp);

    fclose(fp);

    // Return number of records
    return size / sizeof(Record);
}

/* Function to append a record to a file */
int appendRecord(const char* filename, Record* r) {
    FILE* f = fopen(filename, "ab"); // Open the file in binary append mode

    if (f == NULL) {
        return -1; // Failed to open the file
    }

    fwrite(r, sizeof(Record), 1, f); // Write the record to the file

    fclose(f); // Close the file
    return 1; // Successfully appended the record
}


/* Updates a record at a specific index in a binary file */
int updateRecord(const char* filename, int index, Record* newData)
{
    if (filename == NULL || newData == NULL || index < 0)
        return -1;

    FILE* fp = fopen(filename, "r+b");
    if (fp == NULL)
        return -1;

    long offset = index * sizeof(Record);

    if (fseek(fp, offset, SEEK_SET) != 0)
    {
        fclose(fp);
        return -1;
    }

    size_t written = fwrite(newData, sizeof(Record), 1, fp);
    if (written != 1)
    {
        fclose(fp);
        return -1;
    }

    fclose(fp);
    return 1;
}
//-- create a Binary File --//
int createBinaryFile(const char* filename){
    FILE *File ; // creating the file where to store the created binary file 
    File = fopen(*filename, "wb") ;  // creates a binary file 
    if (*filename == NULL)
    {
        return -1; // return -1 when fails 
    }
    else {
        fclose (File) // closes an existing binary file 
        return 0 ; // rerturns 0 when it succeeds  
    } 
}

