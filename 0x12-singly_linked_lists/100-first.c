#include <stdio.h>

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
