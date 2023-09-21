#include "main.h"

/**
 * sp_print_hex_lc - ...
 * @arg: ...
 * Return: ...
*/

int sp_print_hex_lc(va_list arg)
{
	unsigned int number = va_arg(arg, unsigned int);
	int j;
	int i = 0;
	int number_count = 0;
	unsigned int hex_num[64];
	int reminder = 0;
	unsigned int temp = number;

	if (number == 0)
	{
		_putchar('0');
		number_count += 1;
		return (number_count);
	}
	while (temp > 0)
	{
		reminder = temp % 16;
		if (reminder < 10)
		{
			hex_num[i] = reminder + '0';
		}
		else
		{
			hex_num[i] = reminder - 10 + 'a';
		}
		temp /= 16;
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
