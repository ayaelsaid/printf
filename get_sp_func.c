#include "main.h"

/**
 * get_sp_func - function that selects the correct function
 * @s: specifiers
 * Return: Function pointer to the corresponding specifier
 */
int (*get_sp_func(char s))(va_list arg)
{
	sp_t sps[] = {
		{'c', sp_print_char},
		{'s', sp_puts},
		{"d", sp_print_int},
		{"i", sp_print_int},
		{0, NULL},
	};

	int i;

	i = 0;
	while (sps[i].sp)
	{
		if (sps[i].sp == s)
		{
		return (sps[i].f);
		}
	i++;
	}
	return (NULL);
}
