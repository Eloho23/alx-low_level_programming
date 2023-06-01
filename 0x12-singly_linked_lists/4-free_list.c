#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**

free_list - Release the memory allocated for a list
@head: A pointer to the first node of the list to free
*/
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
/**

my_startup_fun - Apply the constructor attribute to my_startup_fun() so that it
is executed before main()
*/
void my_startup_fun(void) attribute((constructor));
/**

my_startup_fun - implementation of my_startup_fun
*/
void my_startup_fun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
