#include "main.h"

/**
 * more_numbers - print number from 0 to 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j;
	char ones;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			ones = j;

			if (j > 9)
			{
				_putchar('1');
				ones = j % 10;
			}

			_putchar('0' + ones);
		}

		_putchar('\n');
		i++;
	}
}
