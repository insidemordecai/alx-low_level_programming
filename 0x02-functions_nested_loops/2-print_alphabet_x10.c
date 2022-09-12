#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');
		count++;
	}
}
