#include "ft_printf.h"

void	ft_putchar(int s, int *count_2)
{
	int	tchek;

	tchek = write(1, &s, 1);
	if (tchek < 0)
	{
		(*count_2) = -1;
		return ;
	}
	(*count_2)++;
}
