#include "ft_printf.h"

void	ft_ptr_hexa(size_t nbr, char *hexa, int *count_2)
{
	if (nbr >= 16)
		ft_ptr_hexa(nbr / 16, hexa, count_2);
	ft_putchar(hexa[nbr % 16], count_2);
}

void	ft_ptr(size_t num, int *count_2)
{
	ft_putstr("0x", count_2);
	ft_ptr_hexa(num, "0123456789abcdef", count_2);
}
