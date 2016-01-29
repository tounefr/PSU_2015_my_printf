/*
** main.c for  in /home/thomas/Documents/epitech/PSU_2015_my_printf
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 09:38:52 2015 Thomas Henon
** Last update Mon Nov 16 10:35:34 2015 Thomas Henon
*/

#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

static t_flags g_flags[N_FLAGS] = {
  { 'd', &d_flag },
  { 'i', &d_flag },
  { 's', &s_flag },
  { 'o', &o_flag },
  { 'u', &u_flag },
  { 'c', &c_flag },
  { 'S', &S_flag },
  { 'p', &p_flag },
  { 'b', &b_flag },
  { 'x', &x_flag },
  { 'X', &X_flag }
};

struct s_opt_flags	g_opt_flags = {0};
int			g_width = 0;
int			g_precision = 0;

char	is_good_opt_flag(char flag)
{
  if (flag == '#')
    return (1);
  if (flag == '0')
    return (1);
  if (flag == '-')
    return (1);
  if (flag == '+')
    return (1);
  if (flag == '\'')
    return (1);
  if (flag == ' ')
    return (1);
  return (0);
}

char	set_opt_flag(char flag)
{
  if (flag == '#')
      g_opt_flags.hash = 1;
  if (flag == '0')
    g_opt_flags.zero = 1;
  if (flag == '-')
    g_opt_flags.dash = 1;
  if (flag == '+')
    g_opt_flags.plus = 1;
  if (flag == '\'')
    g_opt_flags.apo = 1;
  if (flag == ' ')
    g_opt_flags.space = 1;
  return (1);
}

char	is_good_flag(char flag)
{
  int	i;

  i = 0;
  while (i < N_FLAGS)
    {
      if (g_flags[i].flag == flag)
	return (1);
      i++;
    }
  return (0);
}

int	arg_handler(char *format, int *cur_char, va_list *list)
{
  int	i;

  i = 0;
  while (i < N_FLAGS)
    {
      if (g_flags[i].flag == format[*cur_char])
	return (g_flags[i].fct(format, cur_char, list));
      i++;
    }
  return (0);
}

int		my_printf(const char *format, ...)
{
  va_list	list;
  int		i;
  int		chars_written;

  va_start(list, format);
  i = 0;
  chars_written = 0;
  while (format[i] != 0)
    {
      if (format[i] == '%')
	{
	  get_opt_flag((char*)format, &i, &chars_written);
	  get_width((char*)format, &i, &chars_written);
	  get_precision((char*)format, &i, &chars_written);
	  get_flag((char*)format, &i, &chars_written, &list);
	}
      else
	chars_written += my_putchar(format[i]);
      i++;
    }
  va_end(list);
  return (chars_written);
}
