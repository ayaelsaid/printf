#include <stdarg.h>
#include <unistd.h>
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
 * _puts - function that prints a string
 * @str: take a string
 * Return: void
*/
int _puts(const char *str)
{
	int char_count = 0;
	int i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
		_putchar(str[i]);
		char_count++;
		i++;
		}
	}
	return (char_count);
}
/**
 * _percent - function that prints '%'
 * Return: void
 */
int _percent(void)
{
	return (_putchar('%'));
}
