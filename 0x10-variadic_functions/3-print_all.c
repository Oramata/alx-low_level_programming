#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: The list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		if (i > 0)
			printf("%s", separator);

		switch (current_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				separator = va_arg(args, char *);
				if (separator == NULL)
					separator = "(nil)";
				printf("%s", va_arg(args, char *));
				break;
			default:
				break;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
