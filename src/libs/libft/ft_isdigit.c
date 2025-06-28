#include "libft.h"

int	ft_isdigit(int dig)
{
	if ((dig >= 48) && (dig <= 57))
	{
		return (dig);
	}
	else
	{
		return (0);
	}
}
/*
int main (void)
{
	int result; 
	result = ft_isdigit('\001');
	printf("%d\n", result);
}
*/
