#include "main.h"
/**
  sp_print_binary - ...
  @arg: ...
  Return: ...
*/
int sp_print_binary(va_list arg)
{
  int number = va_arg(arg, int);
  int i = 0;
  int j;
  int number_count = 0;
  int binary_num[64];

  if (number == '0')
  {
    putchar('0');
    number_count += 1;
    return (number_count);
  }
  while (number > 0)
  {
    binary_num[i] = number % 2;
    number /= 2;
    i++;
    number_count++;
  }
  j = i - 1;
  while (j >= 0)
  {
    _putchar(binary_num[j] + '0');
    j--;
  }
  return (number_count);
}
