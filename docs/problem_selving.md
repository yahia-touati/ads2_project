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
# ​ Function 6: linearSearch
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

# Functions 12: findMax & findMin

## ​Problem Understanding
​- Input: arr[], size.
​- Output: Returns the highest or lowest value in the array.
​
### Algorithm (findMax)
1. ​Assume the first element arr[0] is the Max.
​2. Loop through the array starting from index 0.
​3. If any element is greater than Max, update Max with that value.
​4. Return Max.

#Function 25: sortRows

## ​Problem Understanding
-Input:2D array m[][MAX_COLS],number of rows, number of columns 
-Output: Each row of the matrix is sorted independently in ascending order

#Algorithm (sortRows)
1.Loop through each row of the matrix.
2.Treat the current row as a 1D array.
3.Apply a sorting algorithm (e.g., selection sort) on that row.
​​4.For each element, find the smallest element in the remaining part of the row.
5.Swap it with the current position.
6.Repeat until the entire row is sorted.
7.Move to the next row and repeat the process.

# Function 33: insertAtPosition

## Problem Understanding
 -Input: linked list L, position pos, value value
 -Output: inserts a new node containing value at position pos (1-based index)
 
# Algorithm (insertAtPosition)
1.Create a new node and assign it the given value.
2.If the position is invalid (pos ≤ 0), stop and return failure.
3.If inserting at position 1:
    -Link the new node to the current head.
    -Update head to the new node.
4.Otherwise, traverse the list to reach the node at position pos - 1.
5.If that position does not exist, stop and return failure.
6.Link the new node between the current node and its next node.
7.Return success.

# Function 33: insertBeginning

## Problem Understanding
Input: L, value
Output: Returns -1 if memory allocation fails.
Purpose: Inserts a new node at the beginning of the linked list.

Edge Cases
- Memory allocation failure.
- Empty list (new node becomes the head).

### Algorithm
1. Allocate memory for a new node.
2. If allocation fails, return -1.
3. Store value in the new node.
4. Set new node’s next pointer to current head.
5. Update head to point to the new node.
6. Return success value.

# Function 38: displayList

## Problem Understanding
 -Input: linked list L
 -Output: prints all elements of the list from head to NULL in order
 
# "Algorithm (displayList)
1.Check if the list is empty (L == NULL). If yes, stop.
2.Set a pointer current to the head of the list.
3.Traverse the list while current is not NULL.
4.Print the data of the current node.
5.If there is a next node, print an arrow “->”.
6.If it is the last node, print “-> NULL”.
7.Move to the next node.
8.End when reaching NULL.

# Function 38: deleteByValue

## Problem Understanding
Input: L, value
Output: Removes the first node containing value.
Purpose: Deletes a node by its value from the linked list.

Edge Cases
- Empty list.
- Value not found.
- Node to delete is the head node.

### Algorithm
1. Check if the list is empty.
2. Traverse the list searching for value.
3. Keep track of current node and previous node.
4. If value is found at head:
   - Update head to next node.
5. Otherwise:
   - Redirect previous node’s next pointer.
6. Free the deleted node.
7. Return success or failure.

# Function 44: insertEndDLL

## Problem Understanding
 -Input: doubly linked list L, value value
 -Output: inserts a new node at the end of the list

# Algorithm (insertEndDLL)
1.Create a new node and assign it the given value.
2.Set the new node’s next pointer to NULL.
3.If the list is empty:
    -Set both head and tail to the new node.
4.Otherwise:
    -Set new node’s prev to current tail.
    -Set current tail’s next to the new node.
    -Update tail to the new node.
5.Return success status.

# Function 45: mergeSortedListe

## ​Problem Understanding (An Example)
​Input: List *A, List *B (two sorted linked lists), List *result (empty list container).
​Output: Modifies result to contain all elements from A and B in non-descending order.
​Key Logic: In-place pointer manipulation (no data copying).
​Edge cases: One or both input lists are empty (NULL).

### ​Algorithm
​Initialize currentA and currentB to the heads of the respective lists.
​Compare the first nodes of A and B to set the result->head.
​Use a tailResult pointer to track the last added node in the new sequence.
​Iterate through both lists using a while loop, attaching the smaller node to tailResult->next and advancing the pointers.
​Once one list is exhausted, link the remaining part of the other list directly to tailResult->next.
​Update result->tail to the final node of the merged list.

# Function 45: initListDLL

## Problem Understanding
Input: L
Output: Initializes the doubly linked list.
Purpose: Creates an empty doubly linked list.

### Algorithm
1. Set head to NULL.
2. Set tail to NULL.
3. Set size to 0.

# Function: deleteByValueDLL

## ​Problem Understanding (An Example)
​Input: DLL *L (Doubly Linked List), int value (target to remove).
​Output: Removes the first occurrence of value from the list and frees its memory.
​Key Logic: Maintaining bi-directional links (prev and next) during removal.
​Edge cases: Deleting the Head, deleting the Tail, deleting the only node, or value not found.

### ​Algorithm
​Check if the list L or its head is NULL.
​Traverse the list starting from head to find the node containing the target value.
​If found:
​Handle Previous Link: If the node is not the head, link prev->next to current->next. Otherwise, update L->head.
​Handle Next Link: If the node is not the tail, link next->prev to current->prev. Otherwise, update L->tail.
​Ensure the new Head's prev and the new Tail's next are set to NULL if they exist.
​Use free(current) to release memory and exit the function.

# Function 49: displayForward

## Problem Understanding
Input: L
Output: Prints all elements from beginning to end.
Purpose: Displays the doubly linked list in forward order.

Edge Cases
- Empty list.

### Algorithm
1. Start from the head node.
2. Traverse using next pointers.
3. Print each node’s data.
4. Stop when reaching NULL.

# Function 49: push

## Problem Understanding
 -Input: stack S, value value
 -Output: pushes a new value onto the top of the stack
 
# Algorithm (push)
1.Allocate a new node.
2.If allocation fails, return -1.
3.Assign the value to the node.
4.Set the node’s next to the current top.
5.Update the stack’s top to the new node.
6.Return success.

# Function 55: isEmpty

## Problem Understanding
Input: S
Output: Returns 1 if stack is empty, otherwise 0.
Purpose: Checks whether the stack contains elements.

### Algorithm
1. Check if S->top is NULL.
2. If true, return 1.
3. Otherwise, return 0.

# Function 60: rear

## Problem Understanding
Input: Q
Output: Returns the front or rear element of the queue.
Purpose: Accesses queue elements without removing them.

Edge Cases
- Empty queue.

### Algorithm
1. Check if queue is empty.
2. If empty, return sentinel value.
3. Otherwise, return Q->rear->data.

# Function 53: initQueue

## Problem Understanding
    -Input: queue Q
    -Output: initializes the queue to an empty state

# Algorithm (initQueue)

1.Check if the queue pointer is valid.
2.Set front to NULL.
3.Set rear to NULL.
4.The queue is now empty and ready for use.

# Function 59: writeRecord

## Problem Understanding
    -Input: file name filename, pointer to record r
    -Output: appends the record to the file in binary format

#Algorithm (writeRecord)
1.Open the file in append-binary mode "ab".
2.If file opening fails, return -1.
3.Write the record to the file using fwrite.
4.If writing fails, close the file and return -1.
5.Close the file.
6.Return success.

# Function 65: appendRecord

## Problem Understanding
Input: filename, r
Output: Appends a record to a binary file.
Purpose: Adds data at the end of the file.

Edge Cases
- File opening failure.

### Algorithm
1. Open file in "ab" mode.
2. If file cannot open, return -1.
3. Write the record into the file.
4. Close the file.
5. Return success value.

# Function 64: updateRecord

## Problem Understanding
    -Input: file name filename, record index index, pointer to new data newData
    -Output: updates the record at the given index in the binary file
    
# Algorithm (updateRecord)
1.Open the file in read/write binary mode "r+b".
2.If opening fails, return -1.
3.Calculate the byte offset: index * sizeof(Record).
4.Move the file pointer to that position using fseek.
5.If seeking fails, close the file and return -1.
6.Write the new record using fwrite.
7.If writing fails, close the file and return -1.
8.Close the file.
9.Return success.

# Function 70: my_strcpy

## Problem Understanding
Input: dest, src
Output: Returns dest containing copied string.
Purpose: Copies one string into another.

Edge Cases
- Destination buffer too small.

### Algorithm
1. Start from first character of src.
2. Copy each character into dest.
3. Continue until '\0' is copied.
4. Return dest.

# Function 68: my_strcat

## Problem Understanding
    -Input: destination string dest, source string src
    -Output: appends src to the end of dest
    
#Algorithm (my_strcat)
1.Check if either pointer is NULL; if so, return dest.
2.Traverse dest until reaching the null terminator '\0'.
3.Starting from that position, copy characters from src.
4.Continue copying until reaching the null terminator of src.
5.Add a null terminator at the end of the new string.
6.Return dest.

# Function 75: toUpperCase

## Problem Understanding
Input: s
Output: Converts all lowercase letters to uppercase.
Purpose: Modifies the string in-place.

Edge Cases
- Empty string.
- String already uppercase.

### Algorithm
1. Traverse the string character by character.
2. Check if character is between 'a' and 'z'.
3. Convert it to uppercase.
4. Continue until '\0'.

#Function 73: reverseString

##Problem Understanding
    -Input: string s
    -Output: reverses the string in place
    
 # Algorithm (reverseString)
1.Check if the string is NULL.
2.Find the end of the string manually (no strlen).
3.Set two pointers:
    -i at the start (index 0)
    -j at the last character (before '\0')
4.Swap characters at i and j.
5.Increment i, decrement j.
6.Repeat until i >= j.

# Function 81: countWords

## Problem Understanding
Input: s
Output: Returns the number of words.
Purpose: Counts words in a string.

Edge Cases
- Empty string.
- Multiple spaces.
- Leading/trailing spaces.

### Algorithm
1. Initialize count to 0.
2. Initialize inWord to false.
3. Traverse the string.
4. If current character is not whitespace and inWord is false:
   - Increment count.
   - Set inWord to true.
5. If current character is whitespace:
   - Set inWord to false.
6. Return count.
 
 # #Function 77: removeChar


## Problem Understanding
    -Input: string s, character c
    -Output: removes all occurrences of c from s in place
    
# Algorithm (removeChar)
1.Check if the string is NULL.
2.Use two indices: i (read) and j (write).
3.Traverse the string with i.
4.If s[i] is not equal to c, copy it to s[j] and increment j.
5.Always increment i.
6.After traversal, add '\0' at position j.

# Function 87: loadDataset

## Problem Understanding
Input: filename, arr[], count
Output: Loads records into arr[] and updates count.
Purpose: Reads records from a binary file.

Edge Cases
- File opening failure.
- Empty file.

### Algorithm
1. Open the file in binary read mode.
2. If opening fails, return -1.
3. Initialize count to 0.
4. Read records one by one into arr[].
5. Increment count for each record read.
6. Close the file.
7. Return success value. 

# Function 91: findMinByField

Problem Understanding
Input: arr[], count
Output: Returns the record with the minimum field value.
Purpose: Finds the smallest record according to a specific field.

Edge Cases
- Empty array.

Algorithm
1. Assume first record is the minimum.
2. Traverse the array from second element.
3. Compare current field with minimum field.
4. If smaller value is found:
   - Update minimum record.
5. Return the minimum record.