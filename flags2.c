/*
** args.c for  in /home/thomas/Documents/epitech/PSU_2015_my_printf
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 11:46:31 2015 Thomas Henon
** Last update Sun Nov 15 16:02:50 2015 Thomas Henon
*/

#include <stdarg.h>
#include "my_printf.h"
#include "my.h"

int	S_flag(char *format, int *cur_char, va_list *list)
{
  char	*str;
  int	i;

  i = 0;
  str = va_arg(*list, char*);
  while (str[i] != 0)
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  S_flag_zeros(str[i]);
	  my_put_nbr_base(str[i], "01234567");
	}
      else
	my_putchar(str[i]);
      i++;
    }
  return (1);
}

int		p_flag(char *format, int *cur_char, va_list *list)
{
  long long	nbr;

  nbr = va_arg(*list, long long);
  if (nbr == 0)
    {
      my_putstr("(nil)");
      return (5);
    }
  else
    {
      my_putstr("0x");
      my_ll_put_nbr_base(nbr, "0123456789abcdef");
    }
  return (10);
}

int		b_flag(char *format, int *cur_char, va_list *list)
{
  unsigned int	nbr;

  nbr = va_arg(*list, unsigned int);
  return (my_ll_put_nbr_base(nbr, "01"));
}

int		x_flag(char *format, int *cur_char, va_list *list)
{
  unsigned int	nbr;

  nbr = va_arg(*list, unsigned int);
  return (my_ll_put_nbr_base(nbr, "0123456789abcdef"));
}

int		X_flag(char *format, int *cur_char, va_list *list)
{
  unsigned int	nbr;

  nbr = va_arg(*list, unsigned int);
  return (my_ll_put_nbr_base(nbr, "0123456789ABCDEF"));
}
