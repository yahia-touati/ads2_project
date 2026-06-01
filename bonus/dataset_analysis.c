#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/array.h"
#include "../include/Menu.h"
#include "../include/file_utils.h"
#include "../include/common.h"


Record inputRecord()
{
    Record Record;
    printf("Enter ID: ");
    scanf("%d", &Record.id);
    while(getchar() != '\n'); // Clear the input buffer
    printf("Enter Name: ");
    fgets(Record.name, sizeof(Record.name), stdin);
    Record.name[strcspn(Record.name, "\n")] = '\0'; // Remove the newline character
    printf("Enter Score: ");
    scanf("%f", &Record.score);
    while(getchar() != '\n'); // Clear the input buffer
    printf("Enter Category: ");
    fgets(Record.category, sizeof(Record.category), stdin);
    Record.category[strcspn(Record.category, "\n")] = '\0'; // Remove the newline character
    return Record;
}
/* A simple implementation of loadDataset */
int loadDataset(const char* filename, Record arr[], int* count) { // filename is the name of the file to read from, arr is the array to store the records, count is a pointer to an integer to store the number of records loaded

    FILE* file = fopen(filename, "rb"); // Open the file in binary read mode

    if(file == NULL) { // Check if the file was opened successfully
        return -1; // Return -1 to indicate an error if the file could not be opened
    }

    *count = 0; // Initialize the count of records to 0

    while(fread(&arr[*count], sizeof(Record), 1, file) == 1) { // Read records from the file one by one until the end of the file is reached
        (*count)++; // Increment the count of records for each record successfully read
    }

    fclose(file); // Close the file after reading

    return 0; // Return 0 to indicate successful loading of the dataset
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


/* A simple implementation of findMinByField */
Record FindMinByField(Record arr[], int count) { // arr is the array of records, count is the number of records in the array

    int i; // Initialize index for iterating through the array
    Record min = arr[0]; // Assume the first record is the minimum initially

    for(i = 1; i < count; i++) { // Loop through the array starting from the second record

        if(arr[i].score < min.score) { // Compare the score of the current record with the minimum score found so far
            min = arr[i]; // If the current record has a lower score, update the minimum record
        }

    }

    return min; // Return the record with the minimum score found in the array
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