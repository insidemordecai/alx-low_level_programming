#include <stdio.h>

/**
 * premain - prints a string before main
 */
void __attribute__((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
