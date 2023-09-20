#include "main.h"

/**
 * sp_print_hex_uc - ...
 * @arg: ...
 * Return: ...
*/

int sp_print_hex_uc(va_list arg)
{
	int number = va_arg(arg, int);
	int i = 0;
	int j;
	int number_count = 0;
	int hex_num[64];
	int reminder = 0;

	if (number == 0)
	{
		_putchar('0');
		number_count += 1;
		return (number_count);
	}
	while (number > 0)
	{
		reminder = number % 16;
		if (reminder < 10)
		{
			hex_num[i] = reminder + '0';
		}
		else
		{
			hex_num[i] = reminder - 10 + 'A';
		}
		number /= 16;
		i++;
		number_count++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(hex_num[j]);
		j--;
	}
	return (number_count);
}
