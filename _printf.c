#include "main.h"
/**
 * _printf - a function that mimics the standard lib function printf.
 * @format: pointer to a string.
 * Return: an integer.
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	char character;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_count++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				char_count++;
			}
			else if (*format == 'c')
			{
				character = va_arg(args, int);
				write(1, &character, 1);
				char_count++;
			}
			else if (*format == 's')
			{
				handle_s(args);
			}
			else if (*format == 'd')
				handle_d(args);
			else if (*format == 'i')
				handle_i(args);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
