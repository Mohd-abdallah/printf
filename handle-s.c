#include "main.h"
/**
 * handle_s - a function that handles the conversion specifier %s.
 * @args: list of argument.
 * Return: number of characters Printed.
 */
int handle_s(va_list args)
{
	int char_count, i = 0;
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		return (-1);
	}
	else
	{
		char_count = strlen(string);
		while (i < char_count)
		{
			_putchar(string[i]);
			i++;
		}
		return (char_count);
	}

}
