#ifndef FT_PRINTF_H
# define FT_PRINTF_H
// # -- Library -- # //
# include "stdio.h"
# include <stdarg.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>
// # -- Library -- # //
// # -- Function -- # //
int			ft_printf(const char *str, ...);
void		ft_putchar(int s, int *count_2);
void		ft_putstr(char *s, int *count_2);
void		ft_putnbr(int nbr, int *count_2);
void		ft_unsigned(unsigned int nbr, int *count_2);
void		ft_hexadecimal(unsigned int nbr, char *hexa, int *count_2);
void		ft_ptr_hexa(size_t nbr, char *hexa, int *count_2);
void		ft_ptr(size_t num, int *count_2);
// # -- Function -- # //
#endif