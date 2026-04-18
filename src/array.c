#include "../include/array.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Reading array values from the user */
void ReadArray(int arr[], int *size)
{
    printf("Enter the size of array: ");
    scanf("%d", size);
    printf("Enter the values:\n");
    for (int i = 0; i < *size; i++)
    {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
/* Initialize: set size to 0 — array is logically empty */
void initArray(int arr[], int* size) {
    *size = 0;
}

/* Print in [a, b, c] format */
void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
} 

/* Insert value at index — shift elements right first */
int insertAt(int arr[], int* size, int index, int value) {
    if (index < 0 || index > *size) return -1;  // invalid index
    if (*size >= MAX_1D) return -1;             // array full

    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*size)++;
    return 0;
}

/* Delete an element from the array */
int deleteAt(int arr[], int* size, int index)
{
    if (index < 0 || index >= *size || *size <= 0) return -1;

    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    return 0;
}

/* linear Search */
int linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
/* Binary Search */
int binarySearch(int arr[], int size, int value)
{
    int left = 0;
    int rithe = size - 1;
    while (left <= rithe)
    {
        int mid = (left + rithe) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if(arr[mid] > value)
        {
            rithe = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    } 
    return -1;
}
/* Merge Sort */
void  mergeSort(int arr[], int left, int right)
{
    if (left >= right) return ;
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        int na = mid - left + 1;
        int nb = right - mid;
        int a[na] ,b[nb];
        for (int i = 0; i < na; i++){
            a[i] = arr[left + i];
        }
        for (int j = 0; j < nb; j++){
            b[j] = arr[mid + 1 + j];
        }
        mergeSortedArrays(a, na, b, nb, &arr[left]);
    }
}
/* Merges tow sorted sub-arrays into a single sorted range
 within the targt array*/
void mergeSortedArrays(int a[], int na, int b[], int nb, int out[])
{
    int i = 0, j = 0, k = 0;
    while (i < na &&  j < nb){
        if (a[i] < b[j]){
            out[k] = a[i];
            i++;
        }
        else {
            out[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < na){
        out[k] = a[i];
        i++;
        k++;
    }
    while (j < nb){
        out[k] = b[j];
        j++;
        k++;
    }
}
void  bubbleSort(int arr[], int size){
    while (true)
    {
        bool flag = false ; 
        for (int  i = 0; i < size -1; i++)
        {
            if (arr[i] > arr [i+1] ){
                int tmp ; 
                tmp = arr[i] ; 
                arr [i] = arr[i+1] ;
                arr[i+1] = tmp ; 
                flag = true ;
            }
        }
        if (flag == false)
        {
            break; 
        }
    }
}