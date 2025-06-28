#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (c);
	else
		return (0);
}
/*
int main(void)
{
	int result = ft_isprint('a');
	printf("%d\n", result);
}
*/
