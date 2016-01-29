/*
** args.c for  in /home/thomas/Documents/epitech/PSU_2015_my_printf
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 11:46:31 2015 Thomas Henon
** Last update Mon Nov 16 10:32:34 2015 Thomas Henon
*/

#include <stdarg.h>
#include "my_printf.h"
#include "my.h"

int		d_flag(char *format, int *cur_char, va_list *list)
{
  int		nbr;

  nbr = va_arg(*list, int);
  if (nbr > 0 && g_opt_flags.space)
    my_putchar(' ');
  return (my_ll_put_nbr_base(nbr, "0123456789"));
}

int	s_flag(char *format, int *cur_char, va_list *list)
{
  char	*str;
  int	str_len;

  str = va_arg(*list, char*);
  str_len = my_strlen(str);
  if (str_len > 0 && g_opt_flags.space)
    my_putchar(' ');
  my_putstr(str);
  return (my_strlen(str));
}

int		o_flag(char *format, int *cur_char, va_list *list)
{
  unsigned int	nbr;

  nbr = va_arg(*list, int);
  return (my_ll_put_nbr_base(nbr, "01234567"));
}

int		u_flag(char *format, int *cur_char, va_list *list)
{
  unsigned int	nbr;

  nbr = va_arg(*list, unsigned int);
  return (my_ll_put_nbr_base(nbr, "0123456789"));
}

int	c_flag(char *format, int *cur_char, va_list *list)
{
  char	c;

  c = (char)va_arg(*list, int);
  return (my_putchar(c));
}
