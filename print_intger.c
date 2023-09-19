#include"main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * sp_print_int - prints an integer
 * @num: The integer to print
 * Return: Number of digits printed
 */
int sp_print_int(va_list arg)
{
	int num_count = 0;
	int num = va_arg(arg, int);

	if (num == 0)
	{
		_putchar('0');
		num_count++;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		num_count++;
	}
	else
	{
		int rev = 0;

		while (num > 0)
		{
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		while (rev > 0)
		{
			_putchar('0' + rev % 10);
			rev /= 10;
			num_count++;
		}
	}
	return (num_count);
}
