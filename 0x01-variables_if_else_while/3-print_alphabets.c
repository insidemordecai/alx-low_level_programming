#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * desc - print out the alphabet in lowercase followed by uppercase
 * return - 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
