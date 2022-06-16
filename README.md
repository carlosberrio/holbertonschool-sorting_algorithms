# Sorting algorithms & Big O
![img](https://lh3.googleusercontent.com/i5b-2XRjI260xgjGhosCQ9tB76iWh452oRmA5Na5dlXuWC-Dag3e13GcQnlw2KxLMqz0gnRaQyt-lCa3ah2tvzPCq6QwlAX7eOWrzC-pWTHksE-PYKpjE6Lh9Rz4u5_hluAT_M7hRafdA0sIRaR2O9iOE5L5yo-nN_nhwGFMb9DKO_8wcIIFj0N7ACLAOCj6AKmSzQqfamdD9GtHX39RtMJUwtD1JB7SwWaMoZSRYbQmyflZmDebtsCGtEZjNJ0a45GrO6d0VDnPXuBWCJbvVNcfqFmDIbMK4uEcOTz68RQiVHJU5LAijj_fE4qdvZrQoIvRQVarvq1GZZHSPzFIlFr3axMi4viFuYDYs9QlYa8aaxz80qDqyb59vHeIDhhAZkli2fzk3BnOcprzZX1CPg7Avrn_JbVBas-TmMygqDEI3Nl1iDfWCHizv9ZSVVdqTis-G3Ob5NSFi-KtFlo591SGiZ9jADydE-wektiwjhQtq6SnUJCXmYnczuTKpPIDJbtRn4-tAdS1Rm5MRT14gGHiqdNxmciPvyxJ6kzFzAoWvz3LsN3JQcfXX3EZl4Addejp5LixIi-2Sv2kzR2i3tCP7LM5unOQnSc_rNO75jFTpJHsrl0-vT6F38nTGMqt325xBSsAW0sLegeCD9XaQ5F0rS4s7jPKVkd4E3SOhMTMHCuS5gf2fDqJlPsIpykyzGPz497TkgkBtTnObRKNbpNWnfJy6BaGPSmf-Lf0pSe9qZUJLJEfgQtO3Tjf=w1154-h649-no?authuser=0)

A Sorting Algorithm is used to rearrange a given array or list elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.
__________________________________________

# Big O Notation
![img](https://lh3.googleusercontent.com/SR31YLSpwD3Wq-35NgrOW9hzLkVtHgOlwyZcm97cXD43XJYK2lfLhk7s5bzm0i7dm56osmjDpZBkJSReQR_d3U1fVPjDebJeCSWFM0Y1XTcgHZSi-Og1Orwjs4sdLz0IgfMFBLw2A8a-gTaY15XrsKhd7uM8q-a5djclUB0DiiXt2YJ3EZ6hamGrghViz2vMWFD6qnYq6fVt-ySKIqbuHKClA8TA7LIGcok6E1uN1MjtyQ9mTEE49LtGoXWsb4HDEchHxXRlcc7GfgU8VoXMfYth7KlhoppNF_PA-BpUUfsB-j_r7-0DSmdKLS0xa4W-gpd9mBfWP1mUKnA6bCC7EBmymsSPsoBe9t2BL9KDfzZo28NkoGgI14eKsKcR1g-llhyH2V6eRcUpDT0brLiDMXdUh7fnYtn8-VQhRuBc7oSwuF-fAIC-sVY4vxRfIMa8mssR--tzd1kgxFn431eylLroucofhAcL5mEiKmp_o-yX8guXSQ5orCCftUUkbX7zLxsun6UEGHsDem51M4zV5G5iJ1ivXed4y_YYZlC33ARLG0PZna-PRDOaNg14_9ffBZIhCDS52g67MRRIAx1oLW3NpbllWXqOnH_lgHPu62JAylka6EVO0YBIcaCQhpGYAigw4nPcoKwBoSr3TArUErhPBJiiT0cqbaPAaiRSzwm7jt60OL5yVXeDg4Vw_XqIR1li6lkY0Y0gsQXlzulXrKRFGPjhLQO1YsLS0VH2MEoxyhP1FprxJM3s1J9M=w300-h227-no?authuser=0)

Is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity.
 ________________________________________

## Learning Objectives

### General
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

## More Info
### Data Structure and Functions

-For this project you are given the following print_array, and print_list functions:

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

- Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions print_array and print_list in your sort.h header file
- Please use the following data structure for doubly linked list:

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

- ***Please, note this format is used for Quiz and Task questions.***

1. O(1)
2. O(n)
3. O(n!)
4. n square -> O(n^2)
5. log(n) -> O(log(n))
6. n * log(n) -> O(nlog(n))
7. n + k -> O(n+k)

## TASKS

0. **BUBBLE SORT**
1. **INSERTION SORT**
2. **SELECTION SORT**
3. **QUICK SORT**

________________________________________
### PEERS
* Diana Marcela Banguera | dianabanguera - 4699@holbertonschool.com
* Carlos Berrio | carlosberrio - 4634@holbertonschool.com