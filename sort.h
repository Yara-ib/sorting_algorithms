#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **head);
void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
int conquer_divide(int *array, int lower_bound, int upper_bound, size_t size);
void quick_sorting(int *array, int lower_bound, int upper_bound, size_t size);

void cocktail_sort_list(listint_t **head);
void switch_nodes(listint_t **head, listint_t *node, listint_t *node1);

void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);


#endif
