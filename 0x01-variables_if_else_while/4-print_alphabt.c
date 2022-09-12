#include <stdio.h>
/**
 * main - print alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			alphabet++;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}

	putchar('\n');
	return (0);
}
