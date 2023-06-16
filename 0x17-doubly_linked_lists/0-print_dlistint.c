#include "lists.h"

/**
 * print_dlistint - it prints all the elements of a dlistint_list
 * @h: the list from the elements are to be printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;
	while (h !=NULL)
	{
		elements = printf("%d\n", h->n);
		h = h ->next;
	}
	return (elements);
