#include "ft_printf.h"

void	ft_putstr(char *s, int *count_2)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)", count_2);
		return ;
	}
	while (s[i])
		ft_putchar((int)s[i++], count_2);
}
