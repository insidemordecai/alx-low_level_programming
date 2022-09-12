#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	putchar('\n');
	return (0);
}
