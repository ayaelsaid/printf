#include "main.h"

/**
 * sp_print_octal - ...
 * @arg: ...
 * Return: ...
*/

int sp_print_octal(va_list arg)
{
	int number = va_arg(arg, int);
	int i = 0;
	int j;
	int number_count = 0;
	int octal_num[64];

	if (number != '0')
	{
		while (number > 0)
		{
			octal_num[i] = number % 8;
			number /= 8;
			i++;
			number_count++;
		}
		j = i - 1;
		while (j >= 0)
		{
			_putchar(octal_num[j]);
			j--;
		}
	}
	return (number_count);
}
