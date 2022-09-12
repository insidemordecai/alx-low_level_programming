#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char base16 = '0';

	while (base16 <= '9')
	{
		putchar(base16);
		base16++;
	}

	base16 = 'a';

	while (base16 <= 'f')
	{
		putchar(base16);
		base16++;
	}

	putchar('\n');
	return (0);
}
