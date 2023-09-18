#include"main.h"
/**
 * print_specifier - print special char
 * @arg : argument
 * @next: char next to %
 * Return:num of printed char
 */

int print_specifier(char next, va_list arg)
{
	int input;

	specifier func[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_intger},
		{"i", print_intger},
		{NULL, NULL},
	};
	for (input = 0; func[input].specifier != NULL; input++)
	{
		if (func[input].specifier[0] == next)
			return (func[input].print(arg));
	}
	return (0);
}

/**
 * _printf - print the string
 * @format: a character string
 * description: declare the value
 * Return: 0(success)
*/
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i;
	int print_spec = 0, print_char = 0;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			print_Char++;
			continue;
		}
			if (format[i + 1] == '%')
		{
			_putchar('%');
			print_Char++;
			i++;
			continue;
		}
			if (format[i + 1] == '\0')
				return (-1);
			print_spec = print_specifier(format[i + 1], arg);
			if (print_spec == -1 || print_spec != 0)
				i++;
			if (print_spec > 0)
				print_char += print_spec;
			if (print_spec == 0)
			{
				_putchar('%');
				print_char++;
			}
	}
	va_end(arg);
	return (print_char);
}
