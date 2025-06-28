#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int main(void)
{
	int result = ft_toupper('2');
	int result2 = toupper('2');
	printf("%d\n", result);
	printf("%d\n", result2);
}
*/
