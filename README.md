#  1/ADS2 Data Structures & Utilities Library

A comprehensive, modular C library built from the ground up to implement core data structures and algorithms required for the ADS2 course at the University of Setif 1, under the supervision of Dr. Zenbout Imene.

---

## 📂 2/Project Structure

`text
ads2_project/
├── include/           # Header files (.h) for all modules, including Menu.h
├── src/               # Source code (.c) for arrays, lists, stacks, and queues
├── Menu/              # Separate interactive menu files for each module
├── bonus/             # Optional data analysis module (dataset_analysis.c)
├── docs/              # Algorithmic documentation and breakdown (problem_solving.md)
├── demo.c             # Main menu-driven interactive program
├── Makefile           # Automation file to compile and run the project
└── README.md          # Current project overview file

# 3/Features

​The project is 100% fully implemented and consists of 92 official functions, alongside custom internal helper functions developed to optimize workflow and code organization:
1. ​Arrays & Matrices: Operations on static (1D/2D) and dynamic arrays featuring various sorting and searching algorithms.
​2. Linked Lists: Singly Linked Lists (SLL) and Doubly Linked Lists (DLL) supporting reverse traversal, sorting, and manipulation.
​3. Advanced ADTs: Pointer-based Stack (LIFO) and Queue (FIFO) structures utilizing dynamic memory allocation.
​4. Files & Strings: Robust binary file handling for data persistence and custom string utility functions.
5. ​Bonus Module: An independent module specifically tailored for parsing and analyzing large datasets.

# 4/How to Run

​Thanks to the configured Makefile, you can automatically compile and launch the interactive program on Linux (Ubuntu) with a single command:  make run.


# 5/Contributors
​This project was successfully developed through the collaborative efforts of our 5-member team:
​Yahia touati - Lead Developer & Repository Maintainer
​Mohamed Oulnane - Contributing Developer
​Mohamed Guemar - Contributing Developer
​Rachai Lina Lebri - Contributing Developer
​Salhi Riham - Contributing Developer