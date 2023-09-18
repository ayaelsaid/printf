#include"main.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

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
_putchar('0');
digit_count++;
}
else if (n < 0)
{
_putchar('-');
digit_count++;
n = -n;
}

if (n / 10)
digit_count += fp_intger(n / 10);

_putchar((n % 10) + '0');
digit_count++;

return (digit_count);
}
