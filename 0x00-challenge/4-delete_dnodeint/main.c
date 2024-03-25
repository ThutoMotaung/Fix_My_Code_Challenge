#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 * Description: Tests the doubly linked list functions
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
dlistint_t *head = NULL;

add_dnodeint_end(&head, 0);
add_dnodeint_end(&head, 1);
add_dnodeint_end(&head, 2);
add_dnodeint_end(&head, 3);
add_dnodeint_end(&head, 4);
add_dnodeint_end(&head, 98);
add_dnodeint_end(&head, 402);
add_dnodeint_end(&head, 1024);

printf("Original list:\n");
print_dlistint(head);
printf("-----------------\n");

delete_dnodeint_at_index(&head, 5);
printf("List after deleting node at index 5:\n");
print_dlistint(head);
printf("-----------------\n");

delete_dnodeint_at_index(&head, 0);
printf("List after deleting node at index 0:\n");
print_dlistint(head);
printf("-----------------\n");

/* Add more test cases for deleting nodes */

free_dlistint(head);

return (EXIT_SUCCESS);
}

