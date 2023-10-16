#include "main.h"
/**
 * handle_s - a function that handles the conversion specifier %s.
 * @args: list of arguments.
 * Return: number of characters Printed.
 */
int handle_c(va_list args)
{
        int char_count = 0;
        char character;
	
	character = va_arg(args, int);
	if (!character)
	{
		return(-1);
	}
	else
	{
		write(1, &character, 1);
		char_count++;
	}
        return(char_count);
}
