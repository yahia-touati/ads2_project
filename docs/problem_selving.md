# Function 1: ReadAraay

## Problem Understending 
- Inupt arr[] - *size
- Output: return if *size > MAX_1D
- Edge Cases *size > MAX_1D or *size < 0
### Algorithm
1. Pompt user for size and store it in *size.
2. if *size exceeds MAX_1D, print erroe and return.
3. loop from 0 to *size - 1 to fill arr[] with user values.

# Function 2: initArray

## ​Problem Understanding
-​ Input: *size
​- Output: Sets *size to 0
​- Purpose: Logically empties the array.
​
### Algorithm
​1. Access the memory location of size.
​2. Assign 0 to *size.

​# Function : printArray

## ​Problem Understanding
- ​Input: arr[], size
​- Output: Prints array in [a, b, c] format.
​- Edge Cases: If size == 0, prints [].

​### Algorithm
1. ​Print opening bracket [.
​2. Loop through arr[] and print each element.
​3. If the element is not the last one, print a comma and space.
​4. Print closing bracket ].

# Function 4: insertAt

## ​Problem Understanding
- ​Input: arr[], *size, index (position), value (element to add).
​- Output: Returns 0 on success, -1 on error; modifies arr[] and *size.
​- Edge Cases: Index out of bounds (<0 or >*size), or array is full (*size >= MAX_1D).

### ​Algorithm
​1. Check if the index is valid and if there is space in the array.
​2. Shift all elements from the end of the array down to the index one position to the right.
3. ​Place the new value at arr[index].
​4. Increment *size by 1.

​# Function 5: deleteAt

## ​Problem Understanding
- ​Input: arr[], *size, index (position to remove).
​- Output: Returns 0 on success, -1 on error; modifies arr[] and *size.
​- Edge Cases: Index out of bounds, or trying to delete from an empty arra   (*size <= 0). 

### ​Algorithm
1. ​Validate that the index exists within the current elements.
​2. Shift all elements from index + 1 to the end one position to the left.
​3. Overwrite each element with its successor to "close the gap".
​4. Decrement *size by 1.

​# Function 6: linearSearch
​
## Problem Understanding
- ​Input: arr[], size, value (target to find).
​- Output: Returns the index of the value if found, or -1 if not found.
​- Edge Cases: Value not in array, or searching an empty array.
​
### Algorithm
​1. Loop through the array from i = 0 to size - 1.
​2. Compare each element arr[i] with the value.
​3. If a match is found, immediately return the index i.
​4. If the loop finishes without a match, return -1.

# Function 7: binarySearch

## ​Problem Understanding
​- Input: arr[] (sorted), size, value (target).
​- Output: Returns the index of the value, or -1 if not found.
​- Constraint: The array must be sorted beforehand.
​
### Algorithm
​1. Initialize left = 0 and right = size - 1.
​2. While left <= right:
3. ​Calculate mid (the middle index).
4. ​If arr[mid] == value, return mid.
5. ​If arr[mid] > value, search the left half (right = mid - 1).
6. ​Otherwise, search the right half (left = mid + 1).
7. ​If the loop ends, return -1.
​
# Function 8: bubbleSort
​
## Problem Understanding
- ​Input: arr[], size.
​- Output: Sorts the array in place.
​- Optimization: Uses a flag to stop early if the array is already sorted.
​
### Algorithm
​1. Start an infinite loop (while true).
2. ​Set flag = false.
3. ​Loop through the array and compare each pair of adjacent elements.
4. ​If the left element is greater than the right, swap them and set flag = true.
5. ​If the loop finishes and flag is still false, break (sorting is done).
​
# Function 9: insertionSort

## ​Problem Understanding
- ​Input: arr[], size.
​- Output: Sorts the array in place by building a sorted portion.
​
### Algorithm
1. ​Loop from the second element (i = 1) to the end.
2. ​For each element, compare it with its predecessors (moving backward).
3. ​If the current element is smaller than the one before it, swap them.
4. ​Continue swapping until the element is in its correct relative position.
​
# Function 10: mergeSort & mergeSortedArrays

## ​Problem Understanding
- ​Input: arr[], left, right.
​- Output: Sorts the array using a Divide and Conquer strategy.
​
### Algorithm
​1. Divide: Find the mid point and recursively call mergeSort for the left and right halves.
2. ​Copy: Create two temporary arrays (a and b) to store the split data.
3. ​Conquer: Use mergeSortedArrays to compare elements from a and b and merge them back into the main array in sorted order.

# Functions 11: findMax & findMin

## ​Problem Understanding
​- Input: arr[], size.
​- Output: Returns the highest or lowest value in the array.
​
### Algorithm (findMax)
1. ​Assume the first element arr[0] is the Max.
​2. Loop through the array starting from index 0.
​3. If any element is greater than Max, update Max with that value.
​4. Return Max.