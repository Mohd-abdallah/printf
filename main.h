#ifndef MAIN_H
#define MAIN_H

/* used Standard Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/* included functions Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int handle_d(va_list args);
int handle_i(va_list args);
int handle_s(va_list args);
int handle_c(va_list args);
int handle_percentage(const char *format);
int handle_oct(va_list args);

/* Macros */

#define BUFF_SIZE 1024



/* Structures */
typedef struct print_function
{
	char *str;
	int (*f)(va_list);
} pf;


#endif
