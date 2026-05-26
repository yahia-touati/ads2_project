#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/file_utils.h"

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

/* A simple implementation of findMinByField */
Record findMinByField(Record arr[], int count) { // arr is the array of records, count is the number of records in the array

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