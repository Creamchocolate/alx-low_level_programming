58 lines (43 sloc)  3.63 KB
Project 0x12. C - How to use Singly linked lists
Learning Objectives
At the end of this project, I am expected to be able to explain to anyone, without the help of Google:

General
When and why using linked lists vs arrays
How to build and use linked lists
Project Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded
Tasks
0. Write a function that prints all the elements of a list_t list.

1. Write a function that returns the number of elements in a linked list_t list.

2. Write a function that adds a new node at the beginning of a list_t list.

3. Write a function that adds a new node at the end of a list_t list.

4. Write a function that frees a list_t list.

Advance 100: Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

You are allowed to use the printf function
Advance 101: Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line

You are only allowed to use the printf function
You are not allowed to use interrupts
Your program will be compiled using nasm and gcc:
