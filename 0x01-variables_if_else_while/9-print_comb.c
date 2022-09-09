#include <stdio.h>
/**
 * desc - print all possible combination of single digit numbers
 * 	- in ascending order seperated by commas and followed by a space
 */
int main(void)
{
	int number = 0; 

	while (number < 10)
	{
		/* in ASCII, 48 is 0 */
		putchar(48 + number);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}

	putchar('\n');
	return (0);
}
