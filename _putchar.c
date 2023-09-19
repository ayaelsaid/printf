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
	int char_count = 0;

	if (ch && ch != '\0')
	{
		_putchar(ch);
		char_count++;
	}
	return (char_count);
}
