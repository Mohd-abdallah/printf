#include "main.h"
/**
 * handle_s - a function that handles the conversion specifier %s.
 * @args: list of argument.
 * Return: number of characters Printed.
 */
int handle_s(va_list args)
{
	int char_count, i;
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		return (-1);
	}
	else
	{
		char_count = strlen(string);
		for (i = 0; i < char_count; i++)
		{
			_putchar(string[i]);
		}
		return (char_count);
	}

}
