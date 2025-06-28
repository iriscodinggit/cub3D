#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*new_char;

	count = 0;
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new_char = malloc((len + 1) * sizeof(char));
	if (new_char == NULL)
		return (NULL);
	while (count < len)
	{
		new_char[count] = s[start];
		count++;
		start++;
	}
	new_char[count] = '\0';
	return (new_char);
}
/*
int main(void)
{
	const char *str1 = "Bonjour ";
	char *new_char = ft_substr(str1, 2, 5);
	printf("%s\n", new_char);
}
*/
