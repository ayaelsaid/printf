#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _putchar - ...
 * @c: ...
 * description: ...
 * Return: ...
*/
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _puts - ...
 * @str: ...
 * description: ...
 * Return: ...
*/
void _puts(char *str)
{
	int i;

	i = 0;
	if (str)
	{
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	}
}

/**
 * _percent - ...
 * description: ...
 * Return: ...
*/
void _percent(void)
{
	char ch = '%';

	_putchar(ch);
}
