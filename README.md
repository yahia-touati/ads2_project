# ADS2 Data Structures & Utilities Library

A comprehensive, modular C library built from the ground up to implement core data structures and algorithms required for the ADS2 course at the University of Setif 1, under the supervision of Dr. Zenbout Imene.

---

# 📂 2/Project Structure

ads2_project/
├── include/
│   ├── common.h            # Shared constants and data structure definitions
│   ├── array.h             # Array module declarations (Module 1)
│   ├── linked_list.h       # Linked list module declarations (Module 2)
│   ├── stack.h             # Stack module declarations (Module 2)
│   ├── queue.h             # Queue module declarations (Module 2)
│   ├── file_utils.h        # Binary file handling module declarations (Module 3)
│   ├── string_utils.h      # String utilities module declarations (Module 4)
│   └── Menu.h              # Declarations for all interactive menu handlers
├── Menu/
│   ├── arrayMenu.c         # Array module interactive interface
│   ├── BonusMenu.c         # Bonus dataset analysis module interface
│   ├── File_HandlingMenu.c # File handling module interactive interface
│   ├── Linked_ListesMenu.c # Linked list module interactive interface
│   ├── QueuesMenu.c        # Queue module interactive interface
│   ├── StacksMenu.c        # Stack module interactive interface
│   └── String_UtilsMenu.c  # String utilities module interactive interface
├── src/
│   ├── array.c             # 1D, 2D, and dynamic array algorithms
│   ├── file_utils.c        # Binary file I/O and data persistence functions
│   ├── linked_list.c       # Singly and doubly linked list algorithms
│   ├── queue.c             # Dynamic FIFO queue structure and operations
│   ├── stack.c             # Dynamic LIFO stack structure and operations
│   └── string_utils.c      # Custom string processing and analysis functions
├── bonus/
│   └── dataset_analysis.c  # Optional dataset analysis module 
├── docs/
│   └── problem_solving.md  # Detailed algorithmic documentation for every function
├── demo.c                  # Main entry point and top-level interactive program
├── Makefile                # Build automation for compiling the full project
├── .gitignore              # Git ignore rules for build artifacts
└── README.md               # This file
# Features

​The project is 100% fully implemented and consists of 92 official functions, alongside custom internal helper functions developed to optimize workflow and code organization:
1. ​Arrays & Matrices: Operations on static (1D/2D) and dynamic arrays featuring various sorting and searching algorithms.
​2. Linked Lists: Singly Linked Lists (SLL) and Doubly Linked Lists (DLL) supporting reverse traversal, sorting, and manipulation.
​3. Advanced ADTs: Pointer-based Stack (LIFO) and Queue (FIFO) structures utilizing dynamic memory allocation.
​4. Files & Strings: Robust binary file handling for data persistence and custom string utility functions.
5. ​Bonus Module: An independent module specifically tailored for parsing and analyzing large datasets.

# How to Run

​Thanks to the configured Makefile, you can automatically compile and launch the interactive program on Linux (Ubuntu) with a single command:  make run.

bash
# Compile and run in one step
make run

# Compile only
make

# Clean build artifacts
make clean

# Contributors

​This project was successfully developed through the collaborative efforts of our 5-member team:
| Name | Role |
|---|---|
| Yahia Touati | Lead Developer & Repository Maintainer |
| Mohamed Oulnane | Contributing Developer |
| Mohamed Guemar | Contributing Developer |
| Lina Racha Lebri | Contributing Developer |
| Riham Salhi | Contributing Developer |