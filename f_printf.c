#include "main.h"

/**
 * sp_puts - function that prints a string
 * @arg: va_list containing the string
 * Return: characte]rs number
 */
int sp_puts(va_list arg)
{
	const char *str = va_arg(arg, char *);
	int char_count = 0;
	int i = 0;

	if (!str)
	{
		str = "(null)";

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			char_count++;
			i++;
		}
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			char_count++;
			i++;
		}
	}
	return (char_count);
}
