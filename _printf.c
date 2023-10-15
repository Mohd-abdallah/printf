#include "main.h"
/**
 * _printf - a function that mimics the standard lib function printf.
 * @format: pointer to a string.
 * Return: an integer.
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	char *string, character;
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
				character = va_arg(args, int);
				write(1, &character, 1);
				char_count++;
			}
			else if (*format == 's')
			{
				string = va_arg(args, char *);
				write(1, string, strlen(string));
				char_count += strlen(string);
			}
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
