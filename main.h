#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct sp - struct Sp
 * @sp: The specifiers
 * @f: The function associated
 */
typedef struct sp
{
	char sp;
	int (*f)(va_list args);
} sp_t;

int _putchar(char c);
int sp_puts(va_list arg);
int sp_print_char(va_list arg);
int sp_printf_per(va_list arg);
int sp_print_int(va_list arg);
int sp_print_binary(va_list arg);
int sp_print_hex_uc(va_list arg);
int sp_print_hex_lc(va_list arg);
int sp_print_octal(va_list arg);
int sp_print_unint(va_list arg);
int (*get_sp_func(char s))(va_list arg);
int _printf(const char *format, ...);

#endif
