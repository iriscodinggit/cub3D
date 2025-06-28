#include "libft.h"

int	ft_isalpha(int alp)
{
	if (((alp > 64) && (alp < 91)) || ((alp > 96) && (alp < 123)))
	{
		return (alp);
	}
	else
	{
		return (0);
	}
}

/*
int main(void)
{
	int alp;
	int result; 
	alp = 'Q';
	result = ft_isalpha(alp);
	printf("%d\n", result);

}
*/
