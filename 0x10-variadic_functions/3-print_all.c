#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0;
	char *str;

	va_start(arguments, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}

		if (format[i])
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(arguments);
}
