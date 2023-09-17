#include"main.h"
/**
*_printf - prints intger numbers
*@format:string
*Return:-1 if fails and digit counter when success
*/
int _printf(const char *format, ...)
{
	int digit = 0;
	int digit_count = 0;
	int div = 1;
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
				int tmp = number;
				number == 0 ? (write(1, "0", 1), digit_count++) : 0;
				number < 0 ? (write(1, "-", 1), digit_count++, number = -number) : 0;
				{
					if (tmp != 0)
					{
						while (tmp != 0)
						{
							tmp /= 10;
							digit++;
						}
						for (int i = 1; i < digit; i++)
						{
							div = div * 10;
						}
						while (div != 0)
						{
							int digit = number / div;
							char num_char = digit + '0';
							write(1, &num_char, 1);
							digit_count++;
							number %= div;
							div = div / 10;
						}
					}
				}
			}
			else if (*format == '%')
				{
					write(1, "%", 1);
					digit_count++;
				}
			}
			else
			{
				write(1, format, 1);
				digit_count++;
			}
			format++;
		}
		va_end(args);
		return (digit_count);
	}
