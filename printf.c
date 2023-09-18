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
	int char_count = 0;

	va_start(pt, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	for (; format && *format != '\0'; format++)
	{
		if (*format == '%')
		{
		format++;
			if (*format == 's')
			{
				const char *str = va_arg(pt, char *);

				char_count += _puts(str);
			}
			else if (*format == 'c')
			{
				int ch = va_arg(pt, int);

				if (ch)
				char_count += _putchar(ch);
			}
			else if (*format == '%')
			{
				char_count += _percent();
			}
		}
		else
		{
			char_count += _putchar(*format);
		}
	}
	va_end(pt);
	return (char_count);
}
