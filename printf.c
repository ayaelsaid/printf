#include "main.h"
/**
 * _printf - print the string
 * @format: a character string
 * description: declare the value
 * Return: 0(success)
*/
int _printf(const char *format, ...)
{
	va_list arg;
	int char_count = 0;
	int print_c = 0;
	int (*f)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	va_start(arg, format);
	while (*format && *format != '\0')
	{
	if (*format == '%')
	{
		format++;
		f = get_sp_func(*format);
		if (f)
		{
			print_c = f(arg);
			char_count += print_c;
		}
		else
		{
			_putchar('%');
			_putchar(*format);
			char_count += 2;
		}
	}
	else
	{
	_putchar(*format);
	char_count++;
	}
	format++;
	}
	va_end(arg);
	return (char_count);
}
