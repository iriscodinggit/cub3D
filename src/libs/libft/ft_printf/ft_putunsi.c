#include "ft_printf.h"

void	ft_unsigned(unsigned int nbr, int *count_2)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count_2);
		ft_putchar(nbr % 10 + '0', count_2);
	}
	else
		ft_putchar(nbr + '0', count_2);
}
