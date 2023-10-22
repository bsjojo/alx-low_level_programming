#include "lists.h"

/**
 *list_len - find the length of a list
 *@h: head of node
 *
 *Return: number of elements in h
 **/

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
