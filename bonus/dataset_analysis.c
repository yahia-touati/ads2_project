#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/file_utils.h"


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