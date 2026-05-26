#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/array.h"
#include "../include/Menu.h"
#include "../include/file_utils.h"
#include "../include/common.h"

/*Reads all records from a file into an array */
int loadDataset(const char* filename, Record arr[], int* count)
{
    FILE* file = fopen(filename, "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    int index = 0;
    while (fread(&arr[index], sizeof(Record), 1, file) == 1)
    {
        index++;
        if (index >= MAX_LIST_SIZE)  // Ensure we don't exceed the array size
        {
            break;
        }
    }
    *count = index;  // Set the count of records read
    fclose(file);
    return 0;  // Success
}

/* Displays the dataset in a tabular format */
void displayDataset(Record arr[], int count)
{
    int i;
    printf("%-10s %-20s %-10s\n", "ID", "Name", "score");  // Print the header
    printf("---------------------------------------------\n");  // Print a separator line
    for (i = 0; i < count; i++)
    {
        printf("%-10d %-20s %-10.2f\n", arr[i].id, arr[i].name, arr[i].score);  // Print each record in a formatted manner
    }
}
/*Sorts the dataset by a specific field */
void sortDatasetByField(Record arr[], int count, char* filed)
{
    if (strcmp(filed, "id") == 0)
    {
        for (int i= 0; i < count-1; i++)
        {
            for (int j = 0; j < count - 1 - i; j++)
            {
                if (arr[j].id > arr[j + 1].id)
                {
                    Record temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if (strcmp(filed, "name") == 0)
    {
        for (int i= 0; i < count-1; i++)
        {
            for (int j = 0; j < count - 1 - i; j++)
            {
                if (strcmp(arr[j].name, arr[j + 1].name) > 0)
                {
                    Record temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if (strcmp(filed, "score") == 0)
    {
        for (int i= 0; i < count-1; i++)
        {
            for (int j = 0; j < count - 1 - i; j++)
            {
                if (arr[j].score > arr[j + 1].score)
                {
                    Record temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if(strcmp(filed, "category") == 0)
    {
        for (int i= 0; i < count-1; i++)
        {
            for (int j = 0; j < count - 1 - i; j++)
            {
                if (strcmp(arr[j].category, arr[j + 1].category) > 0)
                {
                    Record temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}
/*Finds the record with the maximum value for a specific field */
Record FindMaxByField(Record arr[], int count)
{
    Record maxRecord = arr[0];
    for (int i = 0; i < count; i++)
    {
        if (arr[i].score > maxRecord.score)
        {
            maxRecord = arr[i];
        }
    }
    return maxRecord;
}
/*Finds the record with the minimum value for a specific field */
Record FindMinByField(Record arr[], int count)
{
    Record minRecord = arr[0];
    for (int i = 0; i < count; i++)
    {
        if (arr[i].score < minRecord.score)
        {
            minRecord = arr[i];
        }
    }
    return minRecord;
}
/* Calculates the average of a specific field in the dataset */
float averageByField(Record arr[], int count)
{
    if (count == 0)
        return 0;

    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i].score;
    }
    return sum / count;
}

/* Filters records based on a condition and returns the filtered records */
int filterByCondition(Record arr[], int count, float threshold, Record out[])
{
    int filteredCount = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i].score > threshold)
        {
            out[filteredCount] = arr[i];
            filteredCount++;
        }
    }
    return filteredCount;
}
/*save the dataset to a file */
int saveBinaryReport(const char* filename, Record arr[], int count)
{
    FILE* file = fopen(filename, "wb");
    if (file == NULL)
    {
        printf("Error opening file for writing\n");
        return -1;
    }
    for (int i = 0; i < count; i++)
    {
        size_t written = fwrite(&arr[i], sizeof(Record), 1, file);
        if (written != 1)
        {
            printf("Error writing to file\n");
            fclose(file);
            return -1;
        }
    }
    fclose(file);
    return 0; // Success
}