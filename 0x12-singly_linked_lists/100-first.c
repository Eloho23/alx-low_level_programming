#include <stdio.h>

/**
 * pre_main - Prints the initial lines before main function execution.
 */
void pre_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

/**
 * main - The entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    pre_main();  /* Call the pre_main function */
    
    /* Rest of your code goes here */
    
    return 0;
}
