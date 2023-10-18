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
int convert_to_binary(int n);
int handle_s(va_list args);
int handle_oct(va_list args);
int handle_dec(va_list args);


/* Macros */




/* Structures */



#endif
