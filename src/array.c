#include "../include/array.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Reading array values from the user */
void ReadArray(int arr[], int *size)
{
    printf("Enter the size of array: ");
    scanf("%d", size);
    if (*size > MAX_1D || *size < 0)
    {
        printf("Error: \n");
        return ;
    }
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
/* Bubble Sort */
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
/* Insertion Sort */
void  insertionSort(int arr[], int size){
    for (int i = 1; i < size ; i++){
        for (int  j = i; j > 0; j--){
            if (arr[j] < arr [j-1] ){
                int tmp ; 
                tmp = arr[j] ; 
                arr [j] = arr[j-1] ;
                arr[j-1] = tmp ; 
            }       
          }
     }
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

/* Quick Sort */
int partition(int arr[], int low, int high);
void  quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi- 1);
        quickSort(arr, pi + 1, high);
    }
}
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int poivt = arr[low];
    int i = low + 1;
    int j = high;
    while (i <= j){
        while (i <= high && arr[i] <= poivt){
            i++;
        }
        while (j >= low && arr[j] > poivt){
            j--;
        }
        if (i < j){
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

/* Max value */
int  findMax(int arr[], int size){
    int Max = arr[0];
    for (int i = 0; i < size ; i++)
    {
         if (arr [i] > Max)
         {
            Max = arr[i];
         }       
    }
    return Max ;
}

/* Min value */
int  findMin(int arr[], int size){
    int Min = arr[0];
    for (int i = 0; i < size ; i++)
    {
         if (arr [i] < Min)
         {
            Min = arr[i];
         }       
    }
     return Min ;
}

/* Computes the sum of an array of integers */
int sumArray(int arr[], int size) {
    int sum = 0;
    if (size < 0) {
        return 0; // Return 0 for negative size, as it's invalid
    }
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum; // Return the computed sum of the array elements
}

/* Computes the average of an array of integers */
double averageArray(int arr[], int size) {
    if (size <= 0) {
        return 0.0; // Return 0.0 for non-positive size as it's invalid for averaging
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size; // Return the computed average of the array elements
}

/* Reverses the elements of an array of integers in place */
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

/* Rotates the elements of an array of integers to the left by k positions */
void rotateLeft(int arr[], int size, int k){
    if (size <= 0 || k <= 0) {
        return; 
    }
    if (k >= size) {
        k = k % size; 
    }
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < size - k; i++) {
        arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++) {
        arr[size - k + i] = temp[i];
    }
}
/* --- 2D Matrix --- */

/* Prints a 2D matrix of integers to the console */
void printMatrix(int m[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

/* Transposes a 2D matrix of integers */
void transposeMatrix(int m[][MAX_COLS], int rows, int cols, int out[][MAX_COLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            out[j][i] = m[i][j];
        }
    }
}

/* Add tow matrix */
void  addMatrices(int a[][MAX_COLS], int b[][MAX_COLS], int r[][MAX_COLS], int rows, int cols)
{
     /*This condtion is imosed to protedt the memory*/
    if(rows <= MAX_ROWS && cols <= MAX_COLS && rows < 0 && cols < 0){
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                r[i][j] = a[i][j] + b[i][j];
            }
        }
    }
   else {
    printf("Error: Invalid dimensions.\n");
    return;
   }
}
/* Multiplying tow matrix */
void  multiplyMatrices(int a[][MAX_COLS], int b[][MAX_COLS], int r[][MAX_COLS], int n)
{
    if (n <= MAX_COLS && n <= MAX_ROWS && n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                r[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    r[i][j] = r[i][j] + a[i][k] * b[k][j];
                }
            }
        }
    }
    else {
    printf("Error: Invalid dimensions.\n");
    return;
    }
}
/* Calculating the digonal sum of a matrix */
int  sumDiagonal(int m[][MAX_COLS], int n)
{
    int sumDiagonal = 0;
    if (n > 0 && n <= MAX_COLS && n <= MAX_ROWS){
        for (int i = 0; i < n; i++)
        {
            sumDiagonal += m[i][i];
        }
    }
    return sumDiagonal;
}
/* Calculating tha indigonal sum of matrix */
int  sumAntiDiagonal(int m[][MAX_COLS], int n)
{
    int sumAntiDiagonal = 0;
    if (n > 0 && n <= MAX_COLS && n <= MAX_ROWS){
        for (int i = 0; i < n; i++)
        {
           sumAntiDiagonal += m[i][n - i - 1];
        }
    }
    return sumAntiDiagonal;
}
/* Sorts each row of a 2D matrix independently in ascending order */
void sortRows(int m[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        // sort row i
        for (int j = 0; j < cols - 1; j++)
        {
            int minIdx = j;

            for (int k = j + 1; k < cols; k++)
            {
                if (m[i][k] < m[i][minIdx])
                {
                    minIdx = k;
                }
            }

            // swap
            int temp = m[i][j];
            m[i][j] = m[i][minIdx];
            m[i][minIdx] = temp;
        }
    }
}
/* --- Dynamic Arrays --- */

/* Creates a dynamic array of integers with the specified capacity */
int* createDynamicArray(int capacity) {
    if (capacity <= 0) {
        return NULL; // Return NULL for non-positive capacity
    }
    int* arr = (int*)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }
    return arr; // Return the pointer to the newly created dynamic array
}

/* Fills an array of integers with user input */
void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
/* Resizes a dynamic array to a new capacity */
int*  resizeArray(int* arr, int newCapacity)
{
    if (newCapacity <= 0) {
        return NULL; // Return NULL for non-positive new capacity   
    }
    int* newarr = (int*)malloc(newCapacity * sizeof(int));
    if (newarr == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }
    for (int i = 0; i < newCapacity; i++) {
        newarr[i] = arr[i]; 
    }
    return newarr;
}
/* Memory management */
void freeArray(int** arr)
{
    if (arr == NULL || *arr == NULL) return;
    free(*arr);
    *arr = NULL;
}