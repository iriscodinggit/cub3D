#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		count;

	length = ft_strlen(src);
	count = 0;
	dest = malloc((length + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*
int main(void)
{
	char test[] = "test"; 
	printf("%s\n", ft_strdup(test));
}
*/
