#include "main.h"
/**
 * sp_print_binary - ...
 * @arg: ...
 * Return: ...
*/
int sp_print_binary(va_list arg)
{
	unsigned int number = va_arg(arg, unsigned int);
	int i = 0;
	int j;
	int number_count = 0;
	unsigned int *binary_num;
	unsigned int temp = number;
	int size = 0;

	if (number == '0')
	{
		_putchar('0');
		number_count += 1;
		return (number_count);
	}
	while (temp > 0)
	{
		size++;
		temp /= 2;
	}
	binary_num = malloc(sizeof(unsigned int) * (size + 1));
	if (!binary_num)
		return (-1);
	temp = number;
	for (i = 0; i < size; i++)
	{
		binary_num[i] = temp % 2;
		temp /= 2;
		number_count++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(binary_num[j] + '0');
		j--;
	}
	return (number_count);
}
