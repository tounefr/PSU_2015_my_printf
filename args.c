/*
** args.c for  in /home/thomas/Documents/epitech/PSU_2015_my_printf
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov 16 10:34:48 2015 Thomas Henon
** Last update Wed Nov 18 18:11:48 2015 Thomas Henon
*/

#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

void	get_opt_flag(char *format, int *i, int *chars_written)
{
  *i += 1;
  while (is_good_opt_flag(format[*i]))
    {
      *chars_written += set_opt_flag(format[*i]);
      *i += 1;
    }
}

void	get_width(char *format, int *i, int *chars_written)
{
  if (format[*i] >= '0' && format[*i] <= '9')
    g_width = my_getnbr(&(format[*i]));
  while (format[*i] >= '0' && format[*i] <= '9')
    {
      *i += 1;
      *chars_written += 1;
    }
}

void	get_precision(char *format, int *i, int *chars_written)
{
  if (format[*i] == '.')
    {
      *chars_written += 1;
      *i += 1;
      g_precision = my_getnbr(&format[*i]);
      while (format[*i] >= '0' && format[*i] <= '9')
	{
	  *i += 1;
	  *chars_written += 1;
	}
    }
}

void	get_flag(char *format, int *i, int *chars_written, va_list *list)
{
  if (is_good_flag(format[*i]))
    {
      while (is_good_flag(format[*i]))
	{
	  *chars_written += arg_handler(format, i, list);
	  *i += 1;
	}
    }
  else
    {
      if (format[*i] != '%')
	*chars_written += my_putchar('%');
      *chars_written += my_putchar(format[*i]);
    }
}
