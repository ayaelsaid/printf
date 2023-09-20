#include "main.h"

/**
 * sp_print_unint - prints unsigned intger
 * @arg: ...
 * Return: Number of digits printed
 */
int sp_print_unint(va_list arg)
{
	int number = va_arg(arg, int);
	unsigned int div = 1;
	int num_count = 0;

	if (number < 0)
	{
		return (-1);
	}
	else
	{
		for (; number / div > 9; div *= 10)
			;
		for (; div >= 1; div /= 10)
		{
			int output = number / div;

			_putchar('0' + output);
			number %= div;
			num_count++;
		}
	}
	return (num_count);
}
