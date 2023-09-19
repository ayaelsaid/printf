#include"main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - prints an integer
 * @n: The integer to print
 * Return: Number of digits printed
 */
int print_int(int n)
{
	int print_char = 0;
	int n = va_arg(arg, int);

	if (n == 0)
	{
		write(1, "0", 1);
		print_char++;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		print_char++;
		n = -n;
	}

	if (n / 10)
		print_char += print_int(n / 10);
	char n_char = (n % 10) + '0';

	write(1, &n_char, 1);
	print_char++;
	return (print_char);
}
