/**

add_node - Adds a new node at the beginning of a list_t list.
@head: A double pointer to the head of the list.
@str: The string to be duplicated and added to the list.
Return: The address of the new element, or NULL if it failed.
    (On success, returns the address of the new node)
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;

python
Copy code
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
	free(new_node);
	return (NULL);
}

while (str[len] != '\0')
	len++;

new_node->len = len;
new_node->next = *head;
*head = new_node;

return (new_node);
}
