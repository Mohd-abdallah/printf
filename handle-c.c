#include "main.h"
/**
 * handle_c - a function that handles printing the specifier %c.
 * @args: list of arguments.
 * Return: number of characters.
 */
int handle_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
