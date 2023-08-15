#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int is_palindrome(listint_t **head)
{
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *prev_slow = *head;
    listint_t *mid = NULL;
    listint_t *second_half = NULL;
    int result = 1; // Assume the list is a palindrome

    if (*head == NULL || (*head)->next == NULL)
        return 1; // An empty list or a list with one element is a palindrome

    // Move fast and slow pointers to find the middle of the list
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    // Handle odd length by moving slow one step ahead
    if (fast != NULL)
    {
        mid = slow;
        slow = slow->next;
    }

    // Reverse the second half of the list
    second_half = slow;
    prev_slow->next = NULL; // Split the first and second halves
    reverse_list(&second_half);

    result = compare_lists(*head, second_half);

    // Restore the original list
    reverse_list(&second_half);

    // If there was a mid element (odd length list), link it back
    if (mid != NULL)
    {
        prev_slow->next = mid;
        mid->next = second_half;
    }
    else
    {
        prev_slow->next = second_half;
    }

    return result;
}

// Function to reverse a linked list
void reverse_list(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to compare two linked lists
int compare_lists(listint_t *list1, listint_t *list2)
{
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->n != list2->n)
            return 0; // Not a palindrome

        list1 = list1->next;
        list2 = list2->next;
    }

    if (list1 == NULL && list2 == NULL)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}
