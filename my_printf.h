/*
** my_printf.h for  in /home/thomas/Documents/epitech/PSU_2015_my_printf
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Thu Nov 12 10:36:06 2015 Thomas Henon
** Last update Mon Nov 16 10:43:00 2015 Thomas Henon
*/

#ifndef __MY_PRINTF_H__
# define __MY_PRINTF_H__
# define N_FLAGS 12

typedef struct		s_flags
{
  char			flag;
  int (*fct)		(char*, int*, va_list *);
}			t_flags;

struct		s_opt_flags
{
  char			hash;
  char			zero;
  char			dash;
  char			plus;
  char			apo;
  char			space;
};

extern int g_width;
extern int g_precision;
extern struct s_opt_flags g_opt_flags;

/*
** my_printf.c
*/

char			is_good_opt_flag(char flag);
char			set_opt_flag(char flag);
char			is_good_flag(char flag);
int			arg_handler(char *format, int *cur_char, va_list *list);
int			my_printf(const char *format, ...);

/*
** flags.c
*/

int			d_flag(char *format, int *cur_char, va_list *list);
int			s_flag(char *format, int *cur_char, va_list *list);
int			o_flag(char *format, int *cur_char, va_list *list);
int			u_flag(char *format, int *cur_char, va_list *list);
int			u_flag(char *format, int *cur_char, va_list *list);
int			c_flag(char *format, int *cur_char, va_list *list);
int			S_flag(char *format, int *cur_char, va_list *list);
int			p_flag(char *format, int *cur_char, va_list *list);
int			b_flag(char *format, int *cur_char, va_list *list);
int			x_flag(char *format, int *cur_char, va_list *list);
int			X_flag(char *format, int *cur_char, va_list *list);

/*
** args.c
*/

void			get_opt_flag(char *format, int *i, int *chars_written);
void			get_width(char *format, int *i, int *chars_written);
void			get_precision(char *format, int *i, int *chars_written);
void			get_flag(char *format, int *i, int *chars_written, va_list *list);

/*
** types.c
*/

int			my_ll_put_nbr_base(long long nb, char *base);
long long		my_ll_power_rec(long long nb, int power);
int			my_ll_nbr_length(long long nbr);
char			S_flag_zeros(char c);

#endif
