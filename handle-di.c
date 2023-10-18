#include "main.h"
/**
 * handle_d - a function that handles the conversion specifiers %d.
 * @args: list of arguments to be printed in decimal format
 * Return: number of characters printed
 */
int handle_d(va_list args)
{
	int number = va_arg(args, int);
	int num, l = number % 10;
	int digit, power = 1, char_count = 1;

	number = number / 10;
	num = number;
	if (l < 0)
	{
		_putchar('-');
		num = -num;
		number = -number;
		l = -l;
		char_count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			power = power * 10;
			num = num / 10;
		}
		num = number;
		while (power > 0)
		{
			digit = num / power;
			_putchar(digit + '0');
			num = num - (digit * power);
			power = power / 10;
			char_count++;
		}
		_putchar(l + '0');
	}
                return (char_count);
}


/**
 * handle_i - a function that handles the conversion specifiers %i.
 * @args: list of arguments to be printed in decimal format
 * Return: number of characters printed
 */
int handle_i(va_list args)
{
	int number = va_arg(args, int);
	int num, l = number % 10;
	int digit, power = 1, char_count = 1;

	number = number / 10;
	num = number;
	if (l < 0)
	{
		_putchar('-');
		num = -num;
		number = -number;
		l = -l;
		char_count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			power = power * 10;
			num = num / 10;
		}
		num = number;
		while (power > 0)
		{
			digit = num / power;
			_putchar(digit + '0');
			num = num - (digit * power);
			power = power / 10;
			char_count++;
		}
		_putchar(l + '0');
	}
	return (char_count);
}
