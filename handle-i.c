#include "main.h"
/**
 * handle_i - prints integer numbers
 * @args: argument to print in integer format
 * Return: number of characters printed
 */
int handle_i(va_list args)
{
	int number = va_arg(args, int);
	int  num, i = 1, pow = 1;
	int lst = number % 10, digit;

	number = number / 10;
	num = number;
	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		number = -number;
		lst = -lst;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			pow = pow * 10;
			num = num / 10;
		}
		num = number;
		while (pow > 0)
		{
			digit = num / pow;
			_putchar(digit + '0');
			num = num - (digit * pow);
			pow = pow / 10;
			i++;
		}
		_putchar(lst + '0');
	}
	return (i);
}
