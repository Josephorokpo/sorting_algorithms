0x1B. C - Sorting algorithms & Big 
***ALX Software Engineering Project***

# Learning Objectives
At the end of this project, student is expected to be able to explain to anyone, without the help of Google:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

# Requirements for Project

- Allowed Editors: vi, vim, emacs
- Compilation Environment: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- File Endings: All files should end with a new line.
- Mandatory File: README.md at the root of the project folder.
- Coding Style: Code should adhere to the Betty style, checked using betty-style.pl and betty-doc.pl.
- Global Variables: Not allowed.
- Function Limit: No more than 5 functions per file.
- Standard Library: Unless specified otherwise, refrain from using standard library functions like printf, puts, etc.
- Main Files: Provided main.c files are for testing; do not push them to the repo.
- Prototypes: Include function prototypes in the header file (sort.h).
- Header Files: Include guards for all header files.
- Array Sorting: Arrays/lists with a size less than 2 do not need to be sorted.


# Tasks

0. Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

- Prototype: void bubble_sort(int *array, size_t size);
- You’re expected to print the array after each time you swap two elements  
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

1. Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

- Prototype: void insertion_sort_list(listint_t **list);
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements  
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

2. Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

- Prototype: void selection_sort(int *array, size_t size);
- You’re expected to print the array after each time you swap two elements  
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


3. Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

- Prototype: void quick_sort(int *array, size_t size);
- You must implement the Lomuto partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the array after each time you swap two elements  
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


4. Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence

- Prototype: void shell_sort(int *array, size_t size);
- You must use the following sequence of intervals (a.k.a the Knuth sequence):
 - n+1 = n * 3 + 1
 - 1, 4, 13, 40, 121, ...
- You’re expected to print the array each time you decrease the interval.


5. Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm

- Prototype: void cocktail_sort_list(listint_t **list);
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements  
Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


6. Write a function that sorts an array of integers in ascending order using the Counting sort algorithm

- Prototype: void counting_sort(int *array, size_t size);
- You can assume that array will contain only numbers >= 0
- You are allowed to use malloc and free for this task
- You’re expected to print your counting array once it is set up  
- This array is of size k + 1 where k is the largest number in array
Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


7. Write a function that sorts an array of integers in ascending order using the Merge sort algorithm

- Prototype: void merge_sort(int *array, size_t size);
- You must implement the top-down merge sort algorithm
 - When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
 - Sort the left array before the right array
- You are allowed to use printf
- You are allowed to use malloc and free only once (only one call)
 
Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

8. Write a function that sorts an array of integers in ascending order using the Heap sort algorithm

- Prototype: void heap_sort(int *array, size_t size);
- You must implement the sift-down heap sort algorithm
- You’re expected to print the array after each time you swap two elements  
Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

9. Write a function that sorts an array of integers in ascending order using the Radix sort algorithm

- Prototype: void radix_sort(int *array, size_t size);
- You must implement the LSD radix sort algorithm
- You can assume that array will contain only numbers >= 0
- You are allowed to use malloc and free for this task
- You’re expected to print the array each time you increase your significant digit.

10. Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm

- Prototype: void bitonic_sort(int *array, size_t size);
- You can assume that size will be equal to 2^k, where k >= 0 (when array is not NULL …)
- You are allowed to use printf
- You’re expected to print the array each time you swap two elements  
 
Write in the file 106-O, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


11. Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

- Prototype: void quick_sort_hoare(int *array, size_t size);
- You must implement the Hoare partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the array after each time you swap two elements  
Write in the file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case


12.Write a function that sorts a deck of cards.

- Prototype: void sort_deck(deck_node_t **deck);
- You are allowed to use the C standard library function qsort


# Data Structure and Functions

For this project you are given the following print_array, and print_list functions:
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
