/*
** main.c for  in /home/thomas/Documents/epitech/PSU_2015_my_printf
** 
** Made by Thomas Henon
** Login   <thomas.henon@epitech.eu>
** 
** Started on  Mon Nov  9 11:48:00 2015 Thomas Henon
** Last update Wed Nov 18 18:13:01 2015 Thomas Henon
*/

#include <stdio.h>
#include <limits.h>
#include "my_printf.h"

/*
int	main(int argc, char **argv)
{

  printf("Return : %d\n", printf("printf       [d] Min: %d Max: %d Overflow [-]: %d Overflow [+]: %d Type: %d\n",
				 INT_MIN, INT_MAX, INT_MIN-1, INT_MAX+1, "h"));
  printf("Return : %d\n", my_printf("my_printf    [d] Min: %d Max: %d Overflow [-]: %d Overflow [+]: %d Type: %d\n",
				    INT_MIN, INT_MAX, INT_MIN-1, INT_MAX+1, "h"));
  printf("Return : %d\n", printf("printf       [i] Min: %i Max: %i Overflow [-]: %i Overflow [+]: %i Type: %i\n",
				 INT_MIN, INT_MAX, INT_MIN-1, INT_MAX+1, "h"));
  printf("Return : %d\n", my_printf("my_printf    [i] Min: %i Max: %i Overflow [-]: %i Overflow [+]: %i Type: %i\n",
				   INT_MIN, INT_MAX, INT_MIN-1, INT_MAX+1, "h"));
  printf("Return : %d\n", printf("printf       [c] Min: %c Max: %c Overflow [-]: %c Overflow [+]: %c Type: %c\n",
				 0, 255, -1, 256, "a"));
  printf("Return : %d\n", my_printf("my_printf    [c] Min: %c Max: %c Overflow [-]: %c Overflow [+]: %c Type: %c\n",
				    0, 255, -1, 256, "a"));
  printf("Return : %d\n", printf("printf       [s] %s\n", "Hello world !"));
  printf("Return : %d\n", printf("my_printf    [s] %s\n", "Hello world !"));
  printf("Return : %d\n", printf("printf       [u] Min: %u Max: %u Overflow [-]: %u Overflow [+]: %u Type: %u\n",
				 0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", my_printf("my_printf    [u] Min: %u Max: %u Overflow [-]: %u Overflow [+]: %u Type: %u\n",
				    0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", printf("printf       [o] Min: %o Max: %o Overflow [-]: %o Overflow [+]: %o Type: %o\n",
				 0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", my_printf("my_printf    [o] Min: %o Max: %o Overflow [-]: %o Overflow [+]: %o Type: %o\n",
				    0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", printf("printf       [x] Min: %x Max: %x Overflow [-]: %x Overflow [+]: %x Type: %x\n",
				 0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", my_printf("my_printf    [x] Min: %x Max: %x Overflow [-]: %x Overflow [+]: %x Type: %x\n",
				    0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", printf("printf       [X] Min: %X Max: %X Overflow [-]: %X Overflow [+]: %X Type: %X\n",
				 0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", my_printf("my_printf    [X] Min: %X Max: %X Overflow [-]: %X Overflow [+]: %X Type: %X\n",
				    0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", printf("printf       [%] %%\n"));
  printf("Return : %d\n", my_printf("my_printf    [%] %%\n"));
  printf("Return : %d\n", printf("printf       [b] Min: %b Max: %b Overflow [-]: %b Overflow [+]: %b Type: %b\n",
				 0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", my_printf("my_printf    [b] Min: %b Max: %b Overflow [-]: %b Overflow [+]: %b Type: %b\n",
				    0, 4294967295, -1, 4294967296, "a"));
  int a = 1;

  printf("Return : %d\n", printf("printf       [p] Min: %p Max: %p Overflow [-]: %p Overflow [+]: %p Type: %p\n",
				 0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", my_printf("my_printf    [p] Min: %p Max: %p Overflow [-]: %p Overflow [+]: %p Type: %p\n",
				    0, 4294967295, -1, 4294967296, "a"));
  printf("Return : %d\n", printf("printf       [p] Value: %p\n", &a));
  printf("Return : %d\n", my_printf("my_printf    [p] Value: %p\n", &a));
  printf("\n");

  char str[] = "hello world";
  str[3] = 6;
  printf("Return : %d\n", my_printf("my_printf    [S] %S\n", str));
  printf("\n");
  my_printf("my_printf: %%i\n", 123);
  printf("printf: %%i\n");
  printf("\nTest: % d\n", 23);
}
*/

void main()
{
  my_printf("%ds\n\n", 1, "hello");
}
