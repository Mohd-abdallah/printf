#include "main.h"
/**
 * handle_oct - function that prints argument in octal format
 * @args: argument passed to the function
 * Return: number of characters printed
 *
 */

int handle_oct(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int i = 0, int_size, last_index, no_of_didits = 0;
	int *list_of_digits;
	unsigned int container;

	while (number / 8 != 0)
	{
		number = number / 8;
		no_of_didits++;
	}
	no_of_didits++;
	int_size = sizeof(int);
	list_of_digits = malloc(int_size * no_of_didits);
	if (list_of_digits == NULL)
		return (-1);
	while (i < no_of_didits)
	{
		list_of_digits[i] = container % 8;
		container = container / 8;
		i++;
	}
	last_index = no_of_didits - 1;
	while (i >= 0)
	{
		i = last_index;
		_putchar(list_of_digits[i] + '0');
		i--;
	}
	free(list_of_digits);
	return (no_of_didits);
}
