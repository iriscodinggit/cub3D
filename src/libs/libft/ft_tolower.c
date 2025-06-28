#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
int main(void)
{
	int result = ft_tolower('2');
	int result2 = tolower('2');
	printf("%d\n", result);
	printf("%d\n", result2);
}
*/
