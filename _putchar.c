#include "main.h"

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
 * sp_print_char - function that prints a character
 * @arg: va_list containing argument
 * Return: characters number
 */

int sp_print_char(va_list arg)
{
	int ch = va_arg(arg, int);

	if (ch)
	_putchar(ch);
	return (1);
}
