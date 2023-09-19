#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct specifiers - def specifier type for print
 * * @specifier:input type
 * @print: function to print
 */
typedef struct specifiers
{
char *specifier;
int (*print)(va_list);
} specifiers;



int _putchar(char c);
int _puts(const char *str);
int _percent(void);
int _printf(const char *format, ...);
int fp_intger(int n);
int print_int(va_list arg);



#endif
