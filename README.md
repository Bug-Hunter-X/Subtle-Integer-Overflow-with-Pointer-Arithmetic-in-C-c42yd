# Subtle Integer Overflow with Pointer Arithmetic in C
This repository demonstrates a C code snippet with a subtle bug related to pointer arithmetic and potential integer overflow. The issue is not immediately apparent and may exhibit system-dependent behavior.

## Bug Description
The `bug.c` file contains a simple program that initializes an integer variable and modifies its value using a pointer.  However, under certain conditions, an integer overflow could occur, leading to unexpected results. 

## Solution
The solution provided in `bugSolution.c` addresses the issue by adding thorough checks for potential overflow situations and carefully handling the pointer arithmetic.  This makes the code more robust and reliable across different system architectures.

## How to Reproduce
1. Clone this repository.
2. Compile `bug.c` using a C compiler (like GCC). 
3. Run the compiled executable and observe the output. You may not always see the overflow depending on your system and compiler configuration.
4. Compile and run `bugSolution.c` to observe the corrected behavior. 