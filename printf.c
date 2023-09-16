#include "main.h"
/**
 * _printf - ...
 * @format- ...
 * description: ...
 * Return: ...
*/ 
int _printf(const char *format, ...)
{
	va_list p;
	unsigned int b = 0, i = 0;

	va_start(p, format);
	while (format && format[i] != '\0')
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 's':
	{
	char *str = va_arg(p, char *);
	_puts(str);
	break;
	}
	case 'c':
	{
	int c = va_arg(p, int);
	_putchar(c);
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
	va_end(p);
	return (0);
}
