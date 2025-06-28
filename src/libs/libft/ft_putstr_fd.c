#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		ft_putchar_fd(s[count], fd);
		count++;
	}
}
/*
int main()
{
    char caractere[] = "ANCDDSDWDsd";
    int descripteurFichier = 1; 
    ft_putstr_fd(caractere, descripteurFichier);
}
*/
