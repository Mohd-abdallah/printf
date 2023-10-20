# Group project 0x11. C - printf

### Team Members :
* Mohammed Abdallah
* Assma Hamad

### Project description : ------------------
A function called _printf which emulates the standared function printf, that produces output according to a format and returnsthe number of characters printed (excluding the null byte used to end output to strings)
* Prototype: int _printf(const char *format, ...);
* write output to stdout, the standard output stream.
* format is a character string. The format string is composed of zero or more directives.


### The following conversion specifiers has been handled

| Conversion Specifier        | Description           |
| ------------- |:-------------:|
| %c | Prints a character |
| %s | Prints a string      |
| %% | Prints literal percent sign      |
| %d | Prints an integer |
| %i | A decimal integer |
| %r "Custom" | prints the reversed string |



### The following has not been handled
* flag characters
* field width
* precision
* length modifiers
* Buffer
