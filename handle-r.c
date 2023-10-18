#include "main.h"
/**
 * handle_r - a function that handles the custom conversion specifier %r.
 * @args: list of arguments.
 * Return: number of character count.
 */
int handle_r(va_list args)
{
	char *s = va_arg(args, char*);
	int longi = 0;
	int o;

	if (s == NULL)
	{
		s = "Null";
	}
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	return (longi);
}
