#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/file_utils.h"

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