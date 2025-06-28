#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		(*f)(count, s + count);
		count++;
	}
}
/*
int main(void)
{
    char input[] = "Bonjour";
    printf("Avant : %s\n", input);
    ft_striteri(input, ft_exemple);
    printf("Après : %s\n", input); 
}

static void ft_exemple(unsigned int index, char *character)
{
    index = index + 1;
    // Exemple de fonction de traitement : Convertir les caractères en majuscules
    if (*character >= 'a' && *character <= 'z')
    {
        *character = *character - 'a' + 'A';
    }
}
*/
