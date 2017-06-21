![Holberton logo](https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png)
# 0x1A. C - Sorting algorithms & Big O
![sort header](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png)
### Table of Contents
* [**Project Details**](#project-details)
	* [Description](#synopsis)
	* [Project Objectives](#what-students-should-learn-from-this-project)
	* [Resources](#resources)
	* [Project Requirements](#project-requirements)
* [**Project**](#project)
	* [**Task list**](#task-list)
	* [**Status**](#status)
* [**Team**](#team)
* [**Credits**](#credits)

---

## Project Details

### Synopsis
This project introduces concepts of data structures and algorithms in programming. It is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part.

### What students should learn from this project
At the end of this project students are expected to be able to explain to anyone, without the help of Google:
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

### Resources
- Resources from Holberton
  - Read [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm), [Big O notation](http://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation).
  - Watch [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg), [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
  - Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)
- Other resources independently discovered
  - [e-lectures from VisuAlgo](https://visualgo.net/en/sorting?slide=5)
  - [Time Complexity](https://wiki.python.org/moin/TimeComplexity) from official Python documentation
  - [CS 5050 Handout](http://digital.cs.usu.edu/~allanv/cs5050/W2Handout.pdf)
  - [Determining the Complexity of Algorithm (the basic part)](https://philipstel.wordpress.com/2011/03/07/determining-the-complexity-of-an-algorithm-the-basic-part/)
	- 

### Project Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` (`C90`) using the flags `-Wall -Werror -Wextra and -pedantic`

[![image](https://cloud.githubusercontent.com/assets/23224088/24430835/7d83286c-13cd-11e7-9083-aadb330906b8.png)](https://twitter.com/egsy/status/833533513936703489)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, ... is totally forbidden.
- In the following examples, the `main.c` files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called [`sort.h`](./sort.h)
- Don't forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.
- For this project you are given the following `print_array`, and `print_list` functions:

```C
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
```


```C
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
```
- Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
- Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file
- Please use the following data structure for doubly linked list:

```C
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
```

For almost all sorting algorithms you will have to work on, you will be asked to write a file containing the big O notation of the time complexity of the algorithm. Please use this format:

- `O(1)`
- `O(n)`
- `O(n!)`
- n square -> `O(n^2)`
- log(n) -> `O(log(n))`
- n * log(n) -> `O(nlog(n))`
- ...
- Please use the "short" notation (don't use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. All your answers files must have an empty line at the end.

## Project 

### Task list
 Task # | Type | File name and link | Short description |
 ---: | --- | --- | --- |
0 | **Mandatory** | |Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm <p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Bubble_sort">Bubble sort</a> algorithm</p><li>Prototype: <code>void bubble_sort(int *array, size_t size);</code></li><li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li><p>Write in the file <code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p><li>in the best case</li><li>in the average case</li><li>in the worst case</li> |
1 | **Mandatory** | |Write a function that sorts a doubly linked list of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Insertion_sort">Insertion sort</a> algorithm</p><li>Prototype: <code>void insertion_sort_list(listint_t **list);</code></li><li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li><li>You&#39;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li><p>Write in the file <code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p><li>in the best case</li><li>in the average case</li><li>in the worst case</li>  |
2 | **Mandatory** | |Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Selection_sort">Selection sort</a> algorithm</p><li>Prototype: <code>void selection_sort(int *array, size_t size);</code></li><li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li><p>Write in the file <code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p><li>in the best case</li><li>in the average case</li><li>in the worst case</li> |
3 | **Mandatory** | |Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Quicksort">Quick sort</a> algorithm</p><li>Prototype: <code>void quick_sort(int *array, size_t size);</code></li><li>You must implement the <code>Lomuto</code> partition scheme.</li><li>The pivot should always be the last element of the partition being sorted.</li><li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li><p>Write in the file <code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p><li>in the best case</li><li>in the average case</li><li>in the worst case</li> |
4 | **Mandatory** | |What is the time complexity of this function / algorithm? <pre><code>void f(int n)
{
    int i;

    for (i = 0; i &lt; n; i++)
    {
        printf(&quot;[%d]\n&quot;, i);
    }
}
</code></pre>
|
5 | **Mandatory** | |What is the time complexity of this function / algorithm? |
6 | **Mandatory** | |What is the time complexity of this function / algorithm? |
7 | **Mandatory** | |What is the time complexity of this function / algorithm? |
8 | **Mandatory** | |What is the time complexity of this function / algorithm? |
9 | **Mandatory** | |What is the time complexity of this function / algorithm? |
10 | **Mandatory** | |What is the time complexity of this function / algorithm? |
11 | **Mandatory** | |What is the time complexity of this function / algorithm? |
12 | **Mandatory** | |What is the time complexity of this function / algorithm? |
13 | **Mandatory** | |What is the time complexity of this function / algorithm? |
14 | **Mandatory** | |What is the time complexity of this function / algorithm? |
15 | **Mandatory** | |<p>What are the time complexities of those operations on an unsorted array (one answer per line):</p><li>Accessing the nth element</li><li>Inserting at index n</li><li>Removing at index n</li><li>Searching for an element in an array of size n</li><li>Setting value at index n</li>                                                                                                                                                                                                                         |
16 | **Mandatory** | |<p>What are the time complexities of those operations on a singly linked list (one answer per line):</p><li>Accessing the nth element</li><li>Inserting after the nth element (Considering you have a pointer to the node to insert)</li><li>Removing the nth element (Considering you have a pointer to the node to remove)</li><li>Searching for an element in a linked list of size n</li><li>Setting the value of the nth element (Considering you have a pointer to the node to set the value of)</li>      |
17 | **Mandatory** | |<p>What are the time complexities of those operations on a doubly linked list (one answer per line):</p><li>Accessing the nth element</li><li>Inserting after the nth element (Considering you have a pointer to the node to insert)</li><li>Removing the nth element (Considering you have a pointer to the node to remove)</li><li>Searching for an element in a linked list of size n</li><li>Setting the value of the nth element (Considering you have a pointer to the node to set the value of)</li>      |
18 | **Mandatory** | |<p>What are the time complexities of those operations on an unsorted Python 3 list (one answer per line):</p><li>Accessing the nth element</li><li>Inserting at index n</li><li>Removing at index n</li><li>Searching for an element in a Python list of size n</li><li>Setting value at index n</li>                                                                                                                                                                                                            |
19 | **Mandatory** | |<p>What are the time complexities of those operations on a stack (one answer per line):</p><li>push</li><li>pop</li><li>Searching for an element in a stack of size n</li>                                                                                                                                                                                                                                                                                                                                       |
20 | **Mandatory** | |<p>What are the time complexities of those operations on a queue (one answer per line):</p><li>push</li><li>pop</li><li>Searching for an element in a queue of size n</li>                                                                                                                                                                                                                                                                                                                                       |
21 | **Mandatory** | |<p>What are the time complexities of those operations on a hash table (one answer per line) - with the implementation you used during the previous Hash Table C project (chaining):</p><li>Searching for an element, best case</li><li>Searching for an element, worst case</li><li>Insertion, best case</li><li>Insertion, worst case</li><li>Deletion, best case</li><li>Deletion, worst case</li>                                                                                                             |
21 | **Mandatory** | | |
22 | ***Advanced***| | |
 
### Status 
[![Stories in Ready](https://badge.waffle.io/yeungegs/holbertonschool_big-o.png?label=ready&title=Ready)](https://waffle.io/yeungegs/holbertonschool_big-o?utm_source=badge) [![Throughput Graph](https://graphs.waffle.io/yeungegs/holbertonschool_big-o/throughput.svg)](https://waffle.io/yeungegs/holbertonschool_big-o/metrics/throughput)

## Team
[![Carrie Ybay](https://avatars0.githubusercontent.com/u/22947629?v=3&s=230)](https://github.com/hicarrie) | [![Elaine Yeung](https://avatars3.githubusercontent.com/u/23224088?v=3&s=230)](https://github.com/yeungegs)
:---:|:---:
[Carrie Ybay](https://github.com/hicarrie) <a target="_blank" href="https://twitter.com/hicarrie_"> <img src="https://cloud.githubusercontent.com/assets/23224088/24941419/2f3fc5ce-1eff-11e7-9ed3-85693579df09.png" height="20"></a> | [Elaine Yeung](https://github.com/yeungegs) <a target="_blank" href="https://twitter.com/egsy"> <img src="https://cloud.githubusercontent.com/assets/23224088/24941419/2f3fc5ce-1eff-11e7-9ed3-85693579df09.png" height="20"></a>

## Credits
* Readme template from GitHub https://guides.github.com/features/wikis/
