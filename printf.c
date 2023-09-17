#include <stdio.h>
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

			int j = 0;
	    		if (str)
	    		{
	    		while (str[j] != '\0')
	    		{
	    		putchar(str[j]);
	    		j++;
	    		}	
	    		}
		break;
		}
	case 'c':
		{
		int ch = va_arg(pt, int);

		putchar('ch');
		break;
		}
	case '%':
		{
		putchar('%');
		break;
		}
	}
	}
	else
	{
	putchar(format[i]);
	}
	i++;
	}
	va_end(pt);
}
