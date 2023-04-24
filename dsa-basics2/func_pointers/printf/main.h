#ifndef _PRINTFPROJECT_
#define PRINTFPROJECT

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int handle_print_d(va_list d);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_octal(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int handle_print_i(va_list i);
int print_S(va_list S);
int print_p(va_list p);

/**
 * struct format_of_code - structure format
 * @specifier: format specifier
 * @associated_function: function associated with variable list
 */

typedef struct format_of_code
{
    char *specifier;
    int (*associated_function)(va_list);
} code_f;

#endif