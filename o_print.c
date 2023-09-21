#include "main.h"

/**
 * sp_print_octal - ...
 * @arg: ...
 * Return: ...
*/

int sp_print_octal(va_list arg)
{
	unsigned int number = va_arg(arg, unsigned int);
	int i;
	int j;
	int number_count = 0;
	unsigned int octal_num[12];
	unsigned int temp = number;

	if (number == 0)
	{
		_putchar('0');
		number_count++;
		return (number_count);
	}

	temp = number;
	while (temp > 0)
	{
		i = 0;
		octal_num[i] = temp % 8;
		temp /= 8;
		number_count++;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(octal_num[j]);
		j--;
	}
	return (number_count);
}
