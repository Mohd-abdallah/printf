#include "main.h"
/**
 * handle_s - a function that handles the conversion specifier %s.
 * @args: list of arguments.
 * Return: number of characters Printed.
 */
int handle_s(va_list args)
{
	int char_count = 0;
	char *string;

	string = va_arg(args, char *);
	if (!string)
	{
		return(-1);
	}
	else
	{
		write(1, string, strlen(string));
		char_count += strlen(string);
	}
	return(char_count);
}
