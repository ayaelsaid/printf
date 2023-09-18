#include"main.h"
/**
*_printf - prints intger numbers
*@format:string
*Return:-1 if fails and digit counter when success
*/
int _printf(const char *format, ...)
{
	int digit_count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int number = va_arg(args, int);


				digit_count += fp_intger(number);
			}
			else if (*format == '%')
			{
				_putchar('%');
				digit_count++;
			}
		}
		else
		{
			_putchar(*format);
			digit_count++;
		}

		format++;
	}
	va_end(args);
	return (digit_count);
}
