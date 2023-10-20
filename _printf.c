#include "main.h"
/**
 * _printf - a function that mimics the standard lib function printf.
 * @format: pointer to a string.
 * Return: an integer.
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
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
				char_count += handle_percentage(format);
			else if (*format == 'c')
				char_count += handle_c(args);
			else if (*format == 's')
				char_count += handle_s(args);
			else if (*format == 'd')
				char_count += handle_d(args);
			else if (*format == 'i')
				char_count += handle_i(args);
			else if (*format == 'r')
				char_count += handle_reverse(args);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
