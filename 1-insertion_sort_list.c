#include "sort.h"

/**
 * insertion_sort_list - sorts list in ascending order (Insertion sort algo.).
 * @list: double pointer to doubly linked list of integers.
 * Return: nothing.
*/

void insertion_sort_list(listint_t **head)
{
    listint_t *ptr, *next, *temp;

    if (head == NULL || *head == NULL || (*head)->next == NULL)
        return;

    ptr = (*head)->next;

    while (ptr != NULL)
    {
        next = ptr->next;
        temp = ptr;

        while (temp->prev != NULL && temp->n < temp->prev->n)
        {
            temp->prev->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = temp->prev;

            temp->next = temp->prev;
            temp->prev = temp->prev->prev;
            temp->next->prev = temp;

            if (temp->prev != NULL)
                temp->prev->next = temp;
            else
                *head = temp;
            print_list(*head);
        }
        ptr = next;
    }
}
