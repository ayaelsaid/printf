#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct sp - Struct sp
 *
 * @sp: The specifiers
 * @f: The function associated
 */
typedef struct op
{
	char *sp;
	int (*f)(va_list args);
} sp_t;

int _putchar(char c);
int sp_puts(va_list arg);
int sp_print_char(va_list arg);
int fp_intger(int n);
int print_int(va_list arg);
int (*get_sp_func(char s))(va_list arg);
int _printf(const char *format, ...);

#endif
