#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
   unsigned int ui;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("%d\n", -1024);
    printf("%d\n", -1024);
    _printf("%d\n", 0);
    printf("%d\n", 0);
    printf("%d\n", 0);
    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
    _printf("there is %d bytes in %d KB\n", 1024, 1);
    printf("there is %d bytes in %d KB\n", 1024, 1);
     _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     _printf("%i\n", 1024);
     printf("%i\n", 1024);
     _printf("%i\n", -1024);
     printf("%i\n", -1024);
      _printf("%i\n", 0);
    printf("%i\n", 0);
    _printf("%i\n", INT_MAX);
    printf("%i\n", INT_MAX);
    _printf("%i\n", INT_MIN);
    printf("%i\n", INT_MIN);
    _printf("there is %i bytes in %i KB\n", 1024, 1);
    printf("there is %i bytes in %i KB\n", 1024, 1);
     _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     _printf("%d == %i\n", 1024, 1024);
     printf("%d == %i\n", 1024, 1024);
     _printf("iddi%diddiiddi\n", 1024);
     printf("iddi%diddiiddi\n", 1024);
     _printf("%d", 10000);
     printf("%i", 10000);
_printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
 len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
return (0);
}
