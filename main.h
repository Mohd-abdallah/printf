#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/* Prototypes */
int _printf(const char *format, ...);
int handle_d(va_list args);
int handle_i(va_list args);
int _putchar(char c);
int convert_to_binary(int n);
int handle_c(va_list args);
int handle_s(va_list args);
int handle_oct(va_list args);
int handle_r(va_list args);


/* Macros */
#define BUF_SIZE 1024




/* Structures */



#endif
