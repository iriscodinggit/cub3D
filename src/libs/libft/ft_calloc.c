#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (mem == NULL)
		return (mem);
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
/*
int main() 
{
    printf("%p\n", ft_calloc(SIZE_MAX, SIZE_MAX));
    printf("%p\n", calloc(SIZE_MAX, SIZE_MAX));
}
*/
