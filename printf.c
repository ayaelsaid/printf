#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - print the string
 * @format: a character string
 * description: declare the value
 * Return: 0(success)
*/

int _printf(const char *format, ...)
{
	va_list pt;
	unsigned int i = 0;

	va_start(pt, format);
	while (format && format[i] != '\0')
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 's':
	{
	char *str = va_arg(pt, char *);
<<<<<<< HEAD
=======

>>>>>>> db75a9829a45ca4f8e381e48ebc523afe6f7f6a9
	_puts(str);
	break;
	}
	case 'c':
	{
	int ch = va_arg(pt, int);
<<<<<<< HEAD
=======

>>>>>>> db75a9829a45ca4f8e381e48ebc523afe6f7f6a9
	_putchar(ch);
	break;
	}
	case '%':
	_percent();
	break;
	}
	}
	else
	_putchar(format[i]);
	i++;
	}
	va_end(pt);
	return (0);
}
