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
	for (; format && *format != '\0'; format++)
	{
		if (*format == '%')
		{
		format++;
			if (*format == 's')
			{
				char *str = va_arg(pt, char *);

				for (; str && *str != '\0'; str++)
				{
					putchar(*str);
					char_count++;
				}
			}
			else if (*format == 'c')
			{
				int ch = va_arg(pt, int);

				putchar(ch);
				char_count++;
			}
			else if (*format == '%')
			{
				putchar('%');
				char_count++;
			}
		}
		else
		{
			putchar(*format);
			char_count++;
		}
	}
	va_end(pt);
	return (char_count);
}
