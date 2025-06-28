#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\r'
		|| str[count] == '\n' || str[count] == '\v' || str[count] == '\f')
		count++;
	if (str[count] == '+' || str[count] == '-')
		if (str[count++] == '-')
			sign = -1;
	while (str[count] >= '0' && str[count] <= '9' && str[count] != '\0')
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * sign);
}

/*
int main(void)
{
	const char str[] = "1254ddd";
	int result = ft_atoi(str);
	printf("%d\n", result);
}
*/
