#include"main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * sp_print_int - prints an integer
 * @arg:argument...
 * Return: Number of digits printed
 */
int sp_print_int(va_list arg)
{
	int number = va_arg(arg, int);
	unsigned int div = 1;
	int num_count = 0;

	if (number < 0)
	{
		_putchar('-');
		num_count++;
		number = -number;
	}

	for (; number / div > 9; div *= 10)
		;
	for (; div >= 1; div /= 10)
	{
		int output = number / div;

		_putchar('0' + output);
		number %= div;
		num_count++;
	}
	return (num_count);
}
