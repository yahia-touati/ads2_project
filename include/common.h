#ifndef COMMON_H
#define COMMON_H

#define MAX_1D          100
#define MAX_ROWS        20
#define MAX_COLS        20
#define MAX_LIST_SIZE   50
#define MAX_STACK_SIZE  50
#define MAX_QUEUE_SIZE  50
#define MAX_STRING_LEN  256

/* Node for singly linked list */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/* Node for doubly linked list */
typedef struct DNode {
    int data;
    struct DNode* next;
    struct DNode* prev;
} DNode;

/* Cursor-based singly linked list */
typedef struct {
    Node* head;
    int size;
} ArrayList;

/* Doubly linked list with head and tail pointers */
typedef struct {
    DNode* head;
    DNode* tail;
    int size;
} DLL;

/* Array-based Stack */
typedef struct {
    Node* top; // Pointer to the top element
} Stack;

/* Circular Array Queue */
typedef struct {
    Node* front; // First element
    Node* rear; // Last element
    int count;
} Queue;

/* List structure for singly linked list */
typedef struct {
    Node* head;
    int size;
} List;

#endif