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
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_count++;
		}
		/*else if (*format == '%')
		{
			return(-1);
		}*/
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				char_count++;
			}
			else if (*format == 'c')
			{
				handle_c(args);
			}
			else if (*format == 's')
			{
				handle_s(args);
			}
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
