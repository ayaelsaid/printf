#include"main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * fp_intger - prints an integer
 * @n: The integer to print
 * Return: Number of digits printed
 */
int fp_intger(int n)
{
	int digit_count = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		digit_count++;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		digit_count++;
		n = -n;
	}

	if (n / 10)
		digit_count += fp_intger(n / 10);
	char n_char = (n % 10) + '0';

	write(1, &n_char, 1);
	digit_count++;
	return (digit_count);
}
