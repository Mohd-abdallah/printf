#include "main.h"
/**
 * handle_reverse - a function that handles custom specifier %r.
 * @args: list of arguments.
 * Return: number of characters.
 */
int handle_reverse(va_list args)
{
	char *string = va_arg(args, char *);
	int char_count = 0;
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(string[i]);
		char_count++;
	}
	return (char_count);
}
