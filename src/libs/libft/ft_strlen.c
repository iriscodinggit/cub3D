#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
/*
int main(void)
{
	int result = ft_strlen("123456780009");
	printf("%d\n", result); 
}
*/
