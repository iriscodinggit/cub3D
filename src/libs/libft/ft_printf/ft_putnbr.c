#include "ft_printf.h"

void	ft_putnbr(int nbr, int *count_2)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-', count_2);
		n = -nbr;
	}
	else
		n = nbr;
	if (n > 9)
	{
		ft_putnbr(n / 10, count_2);
		ft_putchar(n % 10 + '0', count_2);
	}
	else
		ft_putchar(n + '0', count_2);
}
