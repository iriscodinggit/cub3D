#include "ft_printf.h"

void	ft_hexadecimal(unsigned int nbr, char *hexa, int *count_2)
{
	if (nbr >= 16)
		ft_hexadecimal(nbr / 16, hexa, count_2);
	ft_putchar(hexa[nbr % 16], count_2);
}
