#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;

	count = 0;
	str = ((unsigned char *)s);
	while (count < n)
	{
		if (str[count] == (unsigned char)c)
			return (str + count);
		count++;
	}
	return (NULL);
}
/*
int main() 
{
    char str[] = "Hello, World!";
    char *result = memchr(str, 'o', strlen(str));
	char *result2 = ft_memchr(str, 'o', strlen(str));

   	printf("%s\n", (char *)result);
    printf("%s\n", (char *)result); 
}
*/
