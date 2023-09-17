#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putchar - ...
 * @c: ...
 * description: ...
 * Return: ...
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * _puts - ...
 * @str: ...
 * description: ...
 * Return: ...
*/
void _puts(char *str)
{
	int i;

	i = 0;
	if (str)
	{
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	}
}
/**
 * _percent - ...
 * description: ...
 * Return: ...
*/
void _percent(void)
{
	char ch = '%';

	_putchar(ch);
}
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

		_puts(str);
		break;
		}
	case 'c':
		{
		int ch = va_arg(pt, int);

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
