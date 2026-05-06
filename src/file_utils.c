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
/* Reads a specifc record from a binary file by its index */
int readRecord(const char* filename, int index, Record* r)
{
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        return -1;
    }
    long offset = (long)index * sizeof(Record);
    if (index < 0)
    {
        fclose(fp);
        return -1;
    } 
    if (fseek(fp, offset, SEEK_SET) != 0)
    {
        fclose(fp);
        return -1;
    }
    if (fread(r, sizeof(Record), 1, fp) != 1)
    {
        fclose(fp);
        return -1;
    }
    fclose(fp);
    return 0;
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
/**/
int copyFinaryFile(const char* src, const char* dest)
{
    FILE* f_src = fopen(src, "rb");

    if (f_src == NULL)
    {
        printf("Error opening source file");
        return -1;
    }
    FILE* f_dest = fopen(dest, "wb");
    if (f_dest == NULL)
    {
        printf("Error opening destination file");
        fclose(f_src);
        return -1;
    }
    Record r;
    while(fread(&r, sizeof(Record), 1, f_src) == 1)
    {
        fwrite(&r, sizeof(Record), 1, f_dest);
    }
    fclose(f_src);
    fclose(f_dest);
    return 0;
}