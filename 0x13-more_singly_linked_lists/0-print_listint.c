#include "lists.h"
size_t print_listint(const listint_t *h) {
  size_t n = 0;
  while (h != NULL) {
    printf("element %zu: %d\n", n++, h->n);
    h = h->next;
  }
  return n;
}
