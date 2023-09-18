#include "main.h"
/**
 * _puts - function that prints a string
 * @str: take a string
 * Return: void
*/
int _puts(const char *str)
{
	int char_count;

	if (str)
	{
	for (; str && *str != '\0'; str++)
	{
		_putchar(*str);
		char_count++;
	}
	return (char_count++);
}
/**
 * _percent - ...
 * Return: ...
*/
int _percent(void)
{
	return (_putchar('%'));
}
