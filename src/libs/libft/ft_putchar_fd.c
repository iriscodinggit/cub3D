#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main()
{ 
    char caractere = 'A';
    int descripteurFichier = 1;  // 1 sortie standard
    ft_putchar_fd(caractere, descripteurFichier); 
}
*/
