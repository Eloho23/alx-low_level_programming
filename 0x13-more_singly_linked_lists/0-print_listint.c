#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h) {
  size_t s = 0;

  while (h != NULL) {
    if (h->str == NULL) {
      printf("[%zu] (nil)\n", h->len);
    } else {
      printf("[%zu] %s\n", h->len, h->str);
    }
    s++;
    h = h->next;
  }

  return s;
}
