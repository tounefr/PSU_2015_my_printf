/*
** my_put_nbr_base.c for  in /home/thomas/Documents/epitech/mylib/my
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 13:29:14 2015 Thomas Henon
** Last update Thu Nov 12 12:17:28 2015 Thomas Henon
*/

#include "my.h"

int	my_ll_put_nbr_base(long long nb, char *base)
{
  int	i;
  int	len;
  int	nb_len;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      nb_len++;
    }
  len = my_strlen(base);
  i = nb % len;
  nb = nb / len;
  if (nb > 0)
    my_ll_put_nbr_base(nb, base);
  my_putchar(base[i]);
  nb_len++;
  return (len);
}

long long	my_ll_power_rec(long long nb, int power)
{
  if (power != 1)
    nb = nb * my_ll_power_rec(nb, (power - 1));
  else
    return (nb);
}

int	my_ll_nbr_length(long long nbr)
{
  int	length;
  int	rangs;
  char	neg;

  if (nbr < 0)
    {
      neg = 1;
      nbr = -nbr;
    }
  else
    neg = 0;
  rangs = 19;
  while (rangs >= 0)
    {
      if ((nbr / my_ll_power_rec(10, rangs)) == 0)
	  rangs--;
      else
	return (rangs+neg+1);
    }
  return (rangs+neg+1);
}

char	S_flag_zeros(char c)
{
  char	i;

  i = 0;
  if ((c / my_power_rec(10, 2)) == 0)
    {
      my_putchar('0');
      i++;
    }
  if ((c / my_power_rec(10, 1)) == 0)
    {
      my_putchar('0');
      i++;
    }
  return (i);
}
