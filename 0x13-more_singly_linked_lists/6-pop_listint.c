#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head) {
  // Check if head is null
  if (head == NULL || *head == NULL) {
    return 0;
  }

  // Get the data from the head node
  int num = (*head)->n;

  // Get the next node in the list
  listint_t *temp = (*head)->next;

  // Free the head node
  free(*head);

  // Set head to the next node
  *head = temp;

  // Return the data from the head node
  return num;
}
