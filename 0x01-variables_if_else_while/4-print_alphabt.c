#include <stdio.h>
/**
 * desc - print alphabet in lowercase except q and e
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
