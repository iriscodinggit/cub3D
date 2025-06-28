#include "libft.h"

int	ft_isalnum(int alph)
{
	if (((alph >= 65) && (alph <= 90)) || ((alph >= 97) && (alph <= 122)))
		return (1);
	else if ((alph >= 48) && (alph <= 57))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int result;
	result = ft_isalnum('\001');
	printf("%d\n", result); 
}
*/
