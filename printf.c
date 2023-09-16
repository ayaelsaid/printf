#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - ...
 * @format- ...
 * description: ...
 * Return: ...
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
	_puts(str);
	break;
	}
	case 'c':
	{
	int ch = va_arg(pt, int);
	_putchar(ch);
	break;
	case '%':
	_percent();
	break;
	}
	}
	}
	else
	_putchar(format[i]);
	i++;
	}
	va_end(pt);
	return (0);
}
