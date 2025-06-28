#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		ft_putchar_fd(s[count], fd);
		count++;
	}
	ft_putchar_fd('\n', fd);
}
/*
int main()
{
    char caractere[] = "ANCDDSDWDsd";
    int descripteurFichier = 1; 
    ft_putendl_fd(caractere, descripteurFichier);
}
*/
