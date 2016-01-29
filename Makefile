##
## Makefile for  in /home/henon_t/rendu/Piscine_C_J10
## 
## Made by Thomas Henon
## Login   <henon_t@epitech.net>
## 
## Started on  Fri Oct  9 10:03:01 2015 Thomas Henon
## Last update Mon Nov 16 10:43:28 2015 Thomas Henon
##

CC	= gcc

RM	= rm -f

NAME	= libmy.a

CFLAGS	= -l my -L ./my -I ./my

SRCS	=	./my/my_putchar.c \
		./my/my_isneg.c	\
		./my/my_put_nbr.c \
		./my/my_swap.c \
		./my/my_putstr.c \
		./my/my_strlen.c \
		./my/my_getnbr.c \
		./my/my_sort_int_tab.c \
		./my/my_power_rec.c \
		./my/my_square_root.c \
		./my/my_is_prime.c \
		./my/my_find_prime_sup.c \
		./my/my_strcpy.c \
		./my/my_strncpy.c \
		./my/my_revstr.c \
		./my/my_strstr.c \
		./my/my_strcmp.c \
		./my/my_strncmp.c \
		./my/my_strupcase.c \
		./my/my_strlowcase.c \
		./my/my_strcapitalize.c	\
		./my/my_str_isalpha.c \
		./my/my_str_isnum.c \
		./my/my_str_islower.c \
		./my/my_str_isupper.c \
		./my/my_str_isprintable.c \
		./my/my_showstr.c \
		./my/my_showmem.c \
		./my/my_strcat.c \
		./my/my_strncat.c \
		./my/my_str_to_wordtab.c \
		./my/my_put_nbr_base.c \
		./my/my_put_unbr.c \
		./my/my_put_unbr_base.c \
		my_printf.c \
		flags.c \
		flags2.c \
		types.c \
		args.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) \
	&& ranlib $(NAME) \

all: $(NAME)

test: all
	cc main.c -l my -w -L ./ -I ./ -o my_printf

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) my_printf

re: fclean all

.PHONY: all clean fclean re
