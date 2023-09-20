#include "main.h"

/**
* sp_rev_str - reverse string
* @arg: string to reverse
* Return: -1 if fails , lenght of string when success
*/
int  sp_rev_str(va_list arg)
{
	int i, j = 0;

	char str = va_arg(arg, char);

	while (str[j])
		j++;
	if (j == 0)
		return (-1);
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (j);
}

