Part A - 1D static Arrays

# Function 1: ReadArray

## Problem Understanding 
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

### Algorithm
1. ​Print opening bracket [.
​2. Loop through arr[] and print each element.
​3. If the element is not the last one, print a comma and space.
​4. Print closing bracket ].

# Function : printArray

## ​Problem Understanding 
​Input: arr[] — the array containing the elements, size — the number of elements currently in the array.
​Output: None (returns void); prints the array elements to the standard output in a clean, formatted style.
### Algorithm
​Print the opening bracket [.
​Check if size is greater than 0. If it is, start a loop from 0 to size - 1:
​Print the current element arr[i].
​If the current element is not the last element (i.e., i < size - 1), print a comma and a space ,  to separate it from the next one.
​Print the closing bracket ] followed by a newline character \n to clear the line.

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

# Function 5: deleteAt

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

# Function 9: selectionSort

## ​Problem Understanding

​Input: arr[] — the array to be sorted, size — the number of elements in the array.
​Output: None (returns void); rearranges the elements of arr[] in ascending order in-place.
​Edge cases:
​Array with less than two elements (size <= 1), where the array is already considered sorted and no actions are required.
​Already sorted array, where it still performs the outer loops and exactly n - 1 swaps (swapping an element with itself) unless explicitly optimized.

### ​Algorithm
​Loop through the array from i = 0 up to size - 2 (this tracks the boundary of the sorted portion).
​For each position i, assume the element at i is the minimum, and store its index as minIndex = i.
​Start an inner loop from j = i + 1 up to size - 1 to scan the remaining unsorted portion of the array:
​If arr[j] is strictly less than arr[minIndex], update minIndex = j.
​After finding the actual minimum element in the unsorted portion, swap arr[i] with arr[minIndex].
​Note: This swap is executed exactly once per outer loop iteration, guaranteeing exactly n - 1 swaps in total for the entire sorting process regardless of the initial data order.
​
# Function 10: insertionSort

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
# Function 11: mergeSort & mergeSortedArrays

## ​Problem Understanding
- ​Input: arr[], left, right.
​- Output: Sorts the array using a Divide and Conquer strategy.
​
### Algorithm
​1. Divide: Find the mid point and recursively call mergeSort for the left and right halves.
2. ​Copy: Create two temporary arrays (a and b) to store the split data.
3. ​Conquer: Use mergeSortedArrays to compare elements from a and b and merge them back into the main array in sorted order.

# function 12: quickSort

## ​Problem Understanding

​Input: arr[] — the array to be sorted, low — the starting index of the sub-array to sort, high — the ending index of the sub-array to sort.
​Output: None (returns void); recursively sorts the sub-array in-place in ascending order.
​Edge cases:
​Sub-array with zero or one element (low >= high), which serves as the base case for recursion and requires no sorting.
​Highly unbalanced partitions (e.g., already sorted data when choosing the last element as a pivot), which affects time complexity but is handled correctly by the logic.

### ​Algorithm

1. ​Check if the base case is met: if low < high, proceed to partition and sort.
2. ​Partitioning Stage:
​Pick the last element as the pivot: pivot = arr[high].
​Initialize a tracking index i = low - 1 to mark the boundary of elements smaller than the pivot.
​Loop through the sub-array using a variable j from low to high - 1:
​If arr[j] is less than or equal to the pivot, increment i and swap arr[i] with arr[j].
​After the loop, swap the pivot element (arr[high]) with arr[i + 1] to place the pivot in its correct sorted position.
​Save this final pivot index as pivotIndex = i + 1.
3. ​Recursive Sorting Stage:
​Recursively call quickSort(arr, low, pivotIndex - 1) to sort the left half (elements smaller than the pivot).
​Recursively call quickSort(arr, pivotIndex + 1, high) to sort the right half (elements larger than the pivot).

# Functions 13 - 14: findMax & findMin

## ​Problem Understanding
​- Input: arr[], size.
​- Output: Returns the highest or lowest value in the array.
​
### Algorithm (findMax)
1. ​Assume the first element arr[0] is the Max.
​2. Loop through the array starting from index 0.
​3. If any element is greater than Max, update Max with that value.
​4. Return Max.

# Function 15: sumArray

## ​Problem Understanding

​Input: arr[] — the array containing the integers, size — the number of elements in the array.
​Output: Returns an integer representing the total sum of all elements in the array.
​Edge cases:
​Empty array (size == 0), which must explicitly return 0 as there are no elements to accumulate.
​Array with negative numbers, where the running total should decrease accordingly.
​Large element values, where the sum might risk integer overflow (though standard logic assumes values fit within regular integer bounds).

# ​Algorithm

1. ​Initialize a variable to store the running total, e.g., sum = 0.
​2. Check if the array is empty (size == 0). If it is, the loop will naturally be skipped, and sum remains 0.
​3. Loop through the array from i = 0 up to size - 1:
​Add the value of the current element arr[i] to the sum variable (sum += arr[i]).
​4. After completing the loop, return the final value of sum.

# Function 16: averageArray

## ​Problem Understanding
​Input: arr[] — the array containing the integers, size — the number of elements in the array.
​Output: Returns a double representing the average value of the elements.
​Edge cases:
​Empty array (size == 0), which must return 0.0 explicitly to avoid a critical runtime error (division by zero).
​Integer truncation, where dividing an integer sum by an integer size would discard the fractional part (e.g., 5 / 2 becoming 2 instead of 2.5). This is prevented by casting to double before division.

### ​Algorithm

1. ​Check if the array is empty (size == 0). If it is, return 0.0 immediately.
​2. Initialize a variable to accumulate the total sum, e.g., sum = 0.
​3. Loop through the array from i = 0 up to size - 1 and add each element arr[i] to sum.
​4. Calculate the average by casting the sum to a double (i.e., (double)sum) and then dividing it by size.
​5. Return the resulting floating-point value.

# ​Function 17: reverseArray

## ​Problem Understanding

​Input: arr[] — the array to be reversed, size — the number of elements in the array.
​Output: None (returns void); reverses the order of elements in-place within the original array.
​Edge cases:
​Array with zero or one element (size <= 1), where the array is already its own reverse and no swaps are performed.
​Even vs. Odd sizes (e.g., size = 4 or size = 5). Integer division size / 2 correctly identifies the midpoint loop boundary for both cases without touching the middle element of an odd-sized array (as it doesn't need to move).

### ​Algorithm
1. ​Loop through the first half of the array from i = 0 up to (size / 2) - 1.
​2. For each iteration, swap the element at the current index i with its corresponding element from the back of the array at index size - 1 - i.
​Mechanism: Use a temporary variable (temp = arr[i]) to safely perform the swap in-place without losing data.
3. ​Once the loop reaches the midpoint, terminate to avoid swapping the elements back to their original positions.

# Function 18: rotateLeft

## ​Problem Understanding

​Input: arr[] — the array to be rotated, size — the number of elements in the array, k — the number of positions to shift left.
​Output: None (returns void); modifies the original array by rotating its elements in-place or using a temporary structure.
​Edge cases:
​Empty array or single element (size <= 1), or rotation amount is zero (k == 0), where no movement is required.
​k is larger than size (k > size), which is handled by taking k = k % size because rotating an array of size N exactly N times results in the original array.

### ​Algorithm

1. ​Check if size <= 1 or k == 0. If so, return immediately as no rotation is needed.
2. ​Normalize k using the modulo operator: k = k % size to filter out redundant full cycles. If the resulting k == 0, terminate early.
​3. Allocate a temporary array of size k to temporarily store the first k elements that will "fall off" the front.
​4. Copy the first k elements from arr (from index 0 to k - 1) into the temporary array.
​5. Shift the remaining size - k elements of the original array to the left by k positions:
​Loop from i = k up to size - 1 and move arr[i] to arr[i - k].
​6. Copy the k elements from the temporary array back into the end of the original array:
​7. Place them from index size - k up to size - 1.
​Free any dynamically allocated memory for the temporary array (if applicable) to avoid memory leaks.

Part B - 2D statis Matrices

# Function 19: initMatrix

## ​Problem Understanding

​Input: m[][MAX_COLS] — the 2D matrix, *rows — pointer to save row count, *cols — pointer to save column count.
​Output: None (returns void); updates dimension values and populates the matrix cells via console input.
​Edge cases: Row or column input exceeding MAX_ROWS or MAX_COLS. Input must be validated within safe bounds before executing nested loops.

### ​Algorithm

1. ​Read the desired number of rows and columns from the user using scanf.
​2. Check if the input values exceed structural thresholds (MAX_ROWS or MAX_COLS). Reprompt or handle bounds safely.
​3. Save the valid values to *rows and *cols.
​4. Run a nested loop: Outer loop i from 0 to *rows - 1, and inner loop j from 0 to *cols - 1.
​5. Within the nested loop, capture each matrix element using scanf("%d", &m[i][j]).

# ​Function 20: printMatrix

## ​Problem Understanding

​Input: m[][MAX_COLS] — the matrix to display, rows — total row count, cols — total column count.
​Output: None (returns void); prints formatted matrix contents to the console grid.
​Edge cases: Formatting alignment issues. Utilizing a fixed-width modifier ensures aligned column boundaries even with mixed digit counts.

### ​Algorithm

1. ​Run an outer loop i from 0 up to rows - 1 to parse the rows.
​2. Run an inner loop j from 0 up to cols - 1 to parse the columns within that row.
3. ​Print each element using a fixed-width layout constraint, such as printf("%4d ", m[i][j]).
​4. Once the inner loop completes for a given row, print a newline character \n before moving to the next row sequence.

# ​Function 21: transposeMatrix

## ​Problem Understanding

​Input: m[][MAX_COLS] — original source matrix, rows — row count of m, cols — column count of m, out[][MAX_COLS] — destination matrix.
​Output: None (returns void); populates out with transposed dimensions where columns become rows.
​Edge cases: Non-square matrices (R \neq C), where the destination structure out will have its logical limits inverted (cols rows and rows columns).

### ​Algorithm

1. ​Run a nested loop with an outer loop i from 0 to rows - 1 and an inner loop j from 0 to cols - 1.
​2. For each cell combination, map the source element to its inverse index in the output block: out[j][i] = m[i][j].

# ​Function 22: addMatrices

## ​Problem Understanding

​Input: a[][MAX_COLS] — first matrix, b[][MAX_COLS] — second matrix, r[][MAX_COLS] — result destination matrix, rows — row dimensions, cols — column dimensions.
​Output: None (returns void); creates an element-wise sum matrix inside r.
​Edge cases: Strict operational prerequisite that matrix a and matrix b share identical matrix sizes (R \times C).

### ​Algorithm

1. ​Run an outer loop i from 0 to rows - 1.
​2. Run an inner loop j from 0 to cols - 1.
​3. Add values sharing the same grid position from both source targets and write the summary to the result target: r[i][j] = a[i][j] + b[i][j].

# Function 23: multiplyMatrices

## ​Problem Understanding

​Input: a[][MAX_COLS] — the first matrix, b[][MAX_COLS] — the second matrix, r[][MAX_COLS] — the result destination matrix, n — the dimension size (since both matrices are square of size n \times n).
​Output: None (returns void); populates the matrix r with the product of a and b.
​Edge cases:
​Failing to reset the result matrix, which leads to logical bugs because the algorithm accumulates values into r[i][j]. The destination matrix must be explicitly initialized to zero.
​Large values leading to integer overflow during computation.

### ​Algorithm

1. ​Run a nested loop to initialize all elements of the result matrix r to 0:
​Outer loop i from 0 to n - 1, inner loop j from 0 to n - 1, set r[i][j] = 0.
​2. Implement the standard triple-loop structure to perform matrix multiplication:
​- Outer Loop (i): Iterates through rows of matrix a from 0 to n - 1.
​- Middle Loop (j): Iterates through columns of matrix b from 0 to n - 1.
​- Inner Loop (k): Iterates from 0 to n - 1 to compute the dot product of row i from matrix a and column j from matrix b.
​3. Inside the innermost loop, accumulate the product:
r[i][j] += a[i][k] * b[k][j]

# ​Function 24 - 25: sumDiagonal / sumAntiDiagonal

## ​Problem Understanding

​Input: m[][MAX_COLS] — the square matrix, n — the dimension size of the matrix (n \times n).
​Output: Returns an integer representing the sum of the elements on the specified diagonal.
​Edge cases:
​Matrix with a single element (n == 1), where both main and anti-diagonals point to the same cell m[0][0].
​Performance optimization: Avoiding a nested O(n^2) loop since diagonals can be traversed in a single pass O(n).

### ​Algorithm

​For sumDiagonal (Main Diagonal):
1. ​Initialize a tracker variable sum = 0.
​2. Run a single loop with an index i from 0 up to n - 1.
​3. In each iteration, add the element where the row and column indices are equal to the running total:
sum += m[i][i]
4. ​Return the final value of sum.
​For sumAntiDiagonal (Anti-Diagonal):
​1. Initialize a tracker variable sum = 0.
​2. Run a single loop with an index i from 0 up to n - 1.
​3. In each iteration, compute the column index as n - 1 - i. Add the corresponding element to the running total:
sum += m[i][n - 1 - i]
​4. Return the final value of sum.

# Function 26: isSymmetric

## ​Problem Understanding

​Input: m[][MAX_COLS] — the square matrix to check, n — the dimension size of the matrix (n \times n).
​Output: Returns 1 if the matrix is perfectly symmetric, or 0 otherwise.
​Edge cases:
​Matrix with a single element (n == 1), which is always symmetric and should return 1.
​Early exit: The function should terminate and return 0 immediately upon finding the very first mismatch, avoiding unnecessary comparisons.

### ​Algorithm

1. ​Run an outer loop with index i from 0 up to n - 1 to iterate through the rows.
​2. Run an inner loop with index j from i + 1 up to n - 1.
​Optimization Note: Starting j from i + 1 restricts the check strictly to the upper triangle above the main diagonal, preventing redundant checks (like comparing m[i][j] with m[j][i] twice, or comparing diagonal elements m[i][i] with themselves).
3. ​Inside the inner loop, compare the symmetric positions:
​If m[i][j] != m[j][i], the matrix is not symmetric; return 0 immediately.
​4. If both loops complete fully without triggering a mismatch, the matrix is symmetric; return 1.

# Function 27: sortRows

## ​Problem Understanding
-Input:2D array m[][MAX_COLS],number of rows, number of columns 
-Output: Each row of the matrix is sorted independently in ascending order

### Algorithm (sortRows)
1.Loop through each row of the matrix.
2.Treat the current row as a 1D array.
3.Apply a sorting algorithm (e.g., selection sort) on that row.
​​4.For each element, find the smallest element in the remaining part of the row.
5.Swap it with the current position.
6.Repeat until the entire row is sorted.
7.Move to the next row and repeat the process.

Part C - Dynamic Arrays

# Function 28: createDynamicArray

## ​Problem Understanding

​Input: capacity — the number of integer slots to allocate memory for on the heap.
​Output: Returns a pointer to the allocated block of memory (int*), or NULL if the system fails to allocate the requested memory.
​Edge cases: Memory exhaustion (the operating system runs out of memory). In this case, malloc returns NULL. The program must explicitly handle this to prevent a segmentation fault when trying to write to a null address.

### ​Algorithm

1. ​Call memory allocation using malloc by calculating the total bytes needed: arr = (int*) malloc(capacity * sizeof(int)).
​2. Check if the allocation failed by validating if arr == NULL.
​3. If it is NULL, print an explicit memory allocation error message to stderr or standard output, then return NULL.
​4. If the allocation is successful, return the valid tracking pointer arr.

# ​Function 29: fillArray

## ​Problem Understanding

​Input: arr — pointer to the pre-allocated dynamic array, size — the number of elements to read from the user.
​Output: None (returns void); populates the memory slots from index 0 to size - 1.
​Edge cases: Running this function on an unallocated or NULL pointer. This function explicitly assumes that arr has already been successfully initialized and allocated with enough space to safely hold size elements.

### ​Algorithm

1. ​Start a loop with a counter i from 0 up to size - 1.
​2. In each iteration, prompt or directly read an integer from the standard input using scanf("%d", &arr[i]) (or using pointer arithmetic scanf("%d", arr + i)).
​3. Repeat until all size elements are sequentially stored in the allocated memory block.

# ​Function 30: resizeArray

## ​Problem Understanding

​Input: arr — the current pointer tracking the dynamic array, newCapacity — the new size requirement (larger or smaller).
​Output: Returns a pointer to the newly adjusted memory block (int*), or NULL if reallocation fails.
​Edge cases:
​Reallocation failure: If realloc cannot find a suitable memory block, it returns NULL. Crucially, the original memory block pointed to by arr remains perfectly intact and valid. Therefore, we must never assign arr = realloc(...) directly without a temporary pointer, otherwise we lose the original address and cause a memory leak if it fails.
​Shrinking capacity: If newCapacity is smaller, realloc shrinks the block and releases the trailing memory safely.

### ​Algorithm

1. ​Safely call realloc and assign its result to a temporary pointer variable: temp = realloc(arr, newCapacity * sizeof(int)).
​2. Check if the reallocation failed by verifying if temp == NULL.
​3. If temp is NULL, print a reallocation error message and return NULL immediately (leaving the original arr untouched and un-freed).
​4. If temp is valid, return temp so the calling program can update its array tracker with the new address block.

# ​Function 31: freeArray

## ​Problem Understanding

​Input: arr — pointer to the dynamic array block that needs to be deallocated.
​Output: None (returns void); releases the heap memory back to the operating system.
​Edge cases:
​Passing a NULL pointer: Calling free(NULL) is safe and does nothing in C, but it's good practice to verify.
​Dangling Pointer: After calling free(arr), the pointer variable in the calling function still holds the memory address, but that memory is no longer ours to use. Accessing it causes undefined behavior. To prevent this "dangling pointer" bug, the pointer must be explicitly set to NULL in the caller right after this function executes.

### ​Algorithm

1. ​Check if the passed tracking pointer is already empty (arr == NULL). If true, return immediately to avoid redundant operations.
​2. Call free(arr) to release the allocated block from the heap back to the system.

Singly Linked List

# Function 32: initList

## Problem Understanding
- Input: Pointer to a linked list structure.
- Output: Initializes an empty linked list.
- Purpose: Must be called before using the list.

### Algorithm
1. Set the head pointer to NULL.
2. Set the size variable to 0.
3. The list is now empty and ready for use.

# Function 33: insertBeginning

### Problem Understanding
- Input: L — pointer to the list, value — integer to insert
- Output: returns 0 on success, -1 if memory allocation fails
- Edge cases: malloc returns NULL (memory full)

### Algorithm
1. Allocate a new node using malloc
2. If allocation fails, return -1
3. Store value in the new node
4. Set new node's next to current L->head
5. Update L->head to point to the new node
6. Return 0

# Function 34: insertEnd

### Problem Understanding
- Input: L — pointer to the list, value — integer to insert
- Output: returns 0 on success, -1 if memory allocation fails
- Edge cases: empty list (treat as insertBeginning)

### Algorithm
1. Allocate a new node using malloc
2. If allocation fails, return -1
3. Store value in the new node, set its next to NULL
4. If list is empty (L->head == NULL), set L->head to new node and return 0
5. Traverse the list until the last node (current->next == NULL)
6. Link last node's next to the new node
7. Return 0

# Function 35: insertAtPosition

## Problem Understanding
 -Input: linked list L, position pos, value value
 -Output: inserts a new node containing value at position pos (1-based index)
 
### Algorithm (insertAtPosition)
1.Create a new node and assign it the given value.
2.If the position is invalid (pos ≤ 0), stop and return failure.
3.If inserting at position 1:
    -Link the new node to the current head.
    -Update head to the new node.
4.Otherwise, traverse the list to reach the node at position pos - 1.
5.If that position does not exist, stop and return failure.
6.Link the new node between the current node and its next node.
7.Return success.

# Function 36: deleteBeginning

### Problem Understanding
- Input: L — pointer to the list
- Output: returns the deleted value on success, -1 if list is empty
- Edge cases: empty list (L->head == NULL)

### Algorithm
1. If list is empty (L->head == NULL), return -1
2. Save a pointer to the current head node
3. Save the value stored in the head node
4. Update L->head to point to the second node (head->next)
5. Free the old head node
6. Return the saved value

# Function 37: deleteEnd

## Problem Understanding
- Input: Pointer to a linked list.
- Output: Removes the last node from the list.
- Edge Cases: Empty list or list with one node.

### Algorithm
1. Check if the list is empty.
2. If empty, return a failure value or sentinel.
3. If the list has only one node:
   - Save its value.
   - Free the node.
   - Set head to NULL.
4. Otherwise:
   - Traverse until reaching the last node.
   - Keep track of the previous node.
5. Unlink the last node from the list.
6. Free the last node from memory.
7. Return the deleted value if required.

# Function 38: deleteByValue

### Problem Understanding
- Input: L — pointer to the list, value — integer to delete
- Output: returns 0 on success, -1 if value not found or list is empty
- Edge cases: empty list, value is in head node, value not present

### Algorithm
1. If list is empty (L->head == NULL), return -1
2. If head node contains value, update L->head to head->next, free old head, return 0
3. Traverse the list keeping track of previous node
4. If a node with data == value is found, redirect prev->next to current->next
5. Free the found node and return 0
6. If value not found, return -1

# Function 39: searchValue

### Problem Understanding
- Input: L — pointer to the list, value — integer to search for
- Output: returns pointer to the first node where data == value, or NULL if not found
- Edge cases: empty list, value not present

### Algorithm
1. Start at L->head
2. Traverse the list node by node
3. At each node, check if data == value
4. If match found, return pointer to that node
5. If end of list reached without a match, return NULL

# Function 40: displayList

## Problem Understanding
 -Input: linked list L
 -Output: prints all elements of the list from head to NULL in order
 
### Algorithm (displayList)
1.Check if the list is empty (L == NULL). If yes, stop.
2.Set a pointer current to the head of the list.
3.Traverse the list while current is not NULL.
4.Print the data of the current node.
5.If there is a next node, print an arrow “->”.
6.If it is the last node, print “-> NULL”.
7.Move to the next node.
8.End when reaching NULL.

# Function 41: reverseList

### Problem Understanding
- Input: L — pointer to the list
- Output: void — modifies the list in place, no return value
- Edge cases: empty list, single node (no change needed)

### Algorithm
1. If list is empty or has one node, return immediately
2. Initialize three pointers: prev = NULL, current = L->head, next = NULL
3. Traverse the list, at each step:
   - Save current->next into next
   - Redirect current->next to prev
   - Move prev to current
   - Move current to next
4. After traversal, update L->head to prev (old tail)

# Function 42: sortListBubble

## Problem Understanding
- Input: Linked list L.
- Output: Sorts the list in ascending order using Bubble Sort.
- Constraint: Swap node data values only, not node links.

### Algorithm
1. Repeat passes through the list until no swaps occur.
2. Traverse the list node by node.
3. Compare the current node value with the next node value.
4. If they are out of order:
   - Swap their data values.
5. Continue until the end of the list.
6. When a full pass occurs without swaps, the list is sorted.

# Function 43: mergeSortedLists

### Problem Understanding
- Input: A, B — pointers to two sorted lists, result — pointer to an empty list to store the merged output
- Output: void — builds the merged sorted list into result
- Edge cases: one or both lists are empty

### Algorithm
1. Initialize two pointers: pA = A->head, pB = B->head
2. While both pA and pB are not NULL:
   - If pA->data <= pB->data, insert pA->data into result and advance pA
   - Otherwise, insert pB->data into result and advance pB
3. If elements remain in A, insert them all into result
4. If elements remain in B, insert them all into result

Doubly Linked List
# Function 44: initListDLL

## Problem Understanding
Input: L
Output: Initializes the doubly linked list.
Purpose: Creates an empty doubly linked list.

### Algorithm
1. Set head to NULL.
2. Set tail to NULL.
3. Set size to 0.

# Function 45: insertBeginningDLL

### Problem Understanding
- Input: L — pointer to the doubly linked list, value — integer to insert
- Output: returns 0 on success, -1 if memory allocation fails
- Edge cases: empty list (update both head and tail)

### Algorithm
1. Allocate a new node using malloc
2. If allocation fails, return -1
3. Store value in the new node
4. Set new node's next to current L->head
5. Set new node's prev to NULL
6. If list is empty (L->head == NULL), update L->tail to new node
7. Otherwise, set old head's prev to new node
8. Update L->head to new node
9. Return 0

# Function 46: insertEndDLL

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

# Function 47: deleteByValueDLL

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

# Function 48: displayForward

## Problem Understanding
- Input: Doubly linked list L.
- Output: Prints all node values from beginning to end.
- Concept: Traversal uses next pointers.

### Algorithm
1. Start from the head node.
2. While the current node is not NULL:
   - Print the current node data.
   - Move to the next node using current = current->next.
3. Stop when the end of the list is reached.

# Function 49: displayBackward

### Problem Understanding
- Input: L — pointer to the doubly linked list
- Output: void — prints all elements from tail to head
- Edge cases: empty list (nothing to display)

### Algorithm
1. If list is empty (L->tail == NULL), return immediately
2. Start at L->tail
3. Traverse the list by following prev pointers
4. At each node, print current->data
5. Move to current->prev
6. Repeat until current == NULL

Stack

# Function 51: push

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

# Function 53: peek

## Problem Understanding
- Input: Stack S.
- Output: Returns the top value without removing it.
- Edge Cases: Empty stack.

### Algorithm
1. Check if the stack is empty.
2. If empty, return a sentinel value.
3. Otherwise, access data[top].
4. Return the value without modifying top.


Queue

# Function 55: initQueue

## Problem Understanding
    -Input: queue Q
    -Output: initializes the queue to an empty state

# Algorithm (initQueue)

1.Check if the queue pointer is valid.
2.Set front to NULL.
3.Set rear to NULL.
4.The queue is now empty and ready for use.

# Function 58 - 59: front / rear

## Problem Understanding
- Input: Queue Q.
- Output:
  - front() returns the first element.
  - rear() returns the last element.
- Constraint: Neither function removes elements.

### Algorithm
1. For front():
   - Access data[Q->front].
   - Return the value.
2. For rear():
   - Compute the last index using:
     (Q->rear - 1 + MAX) % MAX
   - Return the value at that index.
3. Do not modify the queue structure.

File Handling

# Function 61: writeRecord

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

# Function 63: countRecords

## Problem Understanding
- Input: Binary file name.
- Output: Returns the number of records stored in the file.
- Concept: File size divided by record size.

### Algorithm
1. Open the file in binary read mode ("rb").
2. Move the file pointer to the end using fseek.
3. Get the file size using ftell.
4. Divide the file size by sizeof(Record).
5. Return the calculated number of records.
6. Close the file.

# Function 66: updateRecord

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

String

# Function 68: my_strlen

## Problem Understanding
- Input: String s.
- Output: Returns the number of characters in the string.
- Constraint: Stop at the null terminator '\0'.

### Algorithm
1. Initialize a counter variable i to 0.
2. Loop while s[i] is not '\0'.
3. Increment i during each iteration.
4. When '\0' is reached, stop looping.
5. Return i as the string length.

# Function 69: my_strcpy

### Problem Understanding
- Input: dest — destination buffer, src — source string to copy
- Output: returns pointer to dest
- Edge cases: src is an empty string (only '\0' is copied)

### Algorithm
1. Save the original pointer to dest
2. Copy characters one by one from src to dest
3. Stop after copying the null terminator '\0'
4. Return the saved pointer to dest

# Function 71: my_strcat

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

# Function 72: my_strcmp

## Problem Understanding
- Input: Two strings a and b.
- Output:
  - 0 if equal,
  - Negative if a < b,
  - Positive if a > b.
- Concept: Compare characters one by one.

### Algorithm
1. Start comparing characters from index 0.
2. While characters are equal and not '\0':
   - Move to the next index.
3. At the first mismatch:
   - Return a[i] - b[i].
4. If both strings end together, return 0.

# Function 74: toUpperCase

### Problem Understanding
- Input: s — pointer to a string
- Output: void — modifies the string in-place, no return value
- Edge cases: empty string, characters that are not letters (left unchanged)

### Algorithm
1. Traverse the string character by character until '\0'
2. At each character, check if it is a lowercase letter ('a' <= s[i] <= 'z')
3. If yes, subtract 32 from it (or use toupper())
4. Move to the next character

# Function 75: toLowerCase

### Problem Understanding
- Input: s — pointer to a string
- Output: void — modifies the string in-place, no return value
- Edge cases: empty string, characters that are not letters (left unchanged)

### Algorithm
1. Traverse the string character by character until '\0'
2. At each character, check if it is an uppercase letter ('A' <= s[i] <= 'Z')
3. If yes, add 32 to it (or use tolower())
4. Move to the next character

# Function 76: reverseString

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
 
 # Function 77 - 78: countVowels / countConsonants

## Problem Understanding
- Input: String s.
- Output:
  - countVowels returns the number of vowels.
  - countConsonants returns the number of consonants.
- Constraint: Ignore non-alphabetic characters.

### Algorithm
1. Initialize a counter to 0.
2. Traverse the string character by character.
3. Convert each character to lowercase.
4. For vowels:
   - Check if the character is in "aeiou".
   - If yes, increment the counter.
5. For consonants:
   - Check if the character is alphabetic.
   - Ensure it is not a vowel.
   - Increment the counter.
6. Return the final count.

# Function 79: countWords

### Problem Understanding
- Input: s — pointer to a string
- Output: returns integer count of words in the string
- Edge cases: empty string, leading/trailing whitespace, multiple spaces between words

### Algorithm
1. Initialize count = 0 and inWord = 0
2. Traverse the string character by character until '\0'
3. At each character:
   - If it is a non-whitespace and inWord == 0, increment count and set inWord = 1
   - If it is a whitespace, set inWord = 0
4. Return count

 # #Function 88: removeChar


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

# Function 91: substring

## Problem Understanding
- Input: Source string src, starting index start, length len, destination string dest.
- Output: Copies a portion of the string into dest.
- Constraint: Always null-terminate the destination string.

### Algorithm
1. Check that start + len does not exceed the source string length.
2. Start a loop from i = 0 to len - 1.
3. Copy src[start + i] into dest[i].
4. After copying, place '\0' at dest[len].
5. The destination string now contains the substring.

Bonus

# Function 93: loadDataset

### Problem Understanding
- Input: filename — path to binary file, arr[] — array to store records, *count — pointer to store number of records loaded
- Output: returns 0 on success, -1 if file cannot be opened
- Edge cases: file does not exist, empty file, array capacity limit reached

### Algorithm
1. Open the file in binary read mode ("rb")
2. If file opens fails, return -1
3. Set *count = 0
4. Read records one by one using fread until EOF or array is full
5. At each successful read, increment *count
6. Close the file
7. Return 0

# Function 94: displayDataset

## Problem Understanding
- Input: Array of Record structures and the number of records.
- Output: Displays all records in a formatted table.
- Purpose: Make dataset output organized and readable.

### Algorithm
1. Print table headers.
2. Loop through all records from index 0 to count - 1.
3. For each record:
   - Print each field using formatted widths with printf.
4. Print each record on a separate line.
5. Continue until all records are displayed.

# Function 95: sortDatasetByField

### Problem Understanding
- Input: arr[] — array of records, count — number of records, field — string indicating sort key ("score", "name", or "id")
- Output: void — sorts arr[] in-place
- Edge cases: invalid field name, count == 0 or count == 1

### Algorithm
1. Determine which field to sort by using strcmp on field
2. Apply a sort algorithm (e.g. bubble sort) on arr[]
3. At each comparison step, compare the correct struct field:
   - "score" — compare float score values
   - "name" — compare strings using strcmp
   - "id" — compare integer id values
4. Swap records where needed

# Function 96 - 97: findMaxByField / findMinByField

### Problem Understanding
- Input: arr[] — array of records, count — number of records
- Output: returns the full Record struct with the highest (or lowest) score
- Edge cases: count == 0 (undefined behavior, assume count >= 1)

### Algorithm
1. Initialize result to arr[0]
2. Traverse arr[] from index 1 to count - 1
3. At each record, compare arr[i].score with result.score
4. If higher (or lower for min), update result to arr[i]
5. Return result

# Function 98: averageByField

### Problem Understanding
- Input: arr[] — array of records, count — number of records
- Output: returns float average of all score fields, or 0.0 if count is 0
- Edge cases: count == 0 (return 0.0 to avoid division by zero)

### Algorithm
1. If count == 0, return 0.0
2. Initialize sum = 0.0
3. Traverse arr[] from index 0 to count - 1
4. Add each arr[i].score to sum
5. Return sum / count cast to float

# Function 99: filterByCondition

### Problem Understanding
- Input: arr[] — array of records, count — number of records, threshold — minimum score value, out[] — array to store matching records
- Output: returns integer count of records copied into out[]
- Edge cases: no records match, count == 0

### Algorithm
1. Initialize outCount = 0
2. Traverse arr[] from index 0 to count - 1
3. At each record, check if arr[i].score > threshold
4. If condition is met, copy record into out[outCount] and increment outCount
5. Return outCount
# Function 100: saveBinaryReport

### Problem Understanding
- Input: filename — path to output file, arr[] — array of records, count — number of records to write
- Output: returns 0 on success, -1 if file cannot be opened
- Edge cases: file creation fails, count == 0 (empty file written)

### Algorithm
1. Open the file in binary write mode ("wb")
2. If file open fails, return -1
3. Traverse arr[] from index 0 to count - 1
4. Write each record using fwrite
5. Close the file
6. Return 0