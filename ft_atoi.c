#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] && (nptr[i] == 32 || (9 <= nptr[i] && nptr[i] <= 13)))
		i++;
	if (nptr[i] && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
		result = result * 10 + (nptr[i++] - '0');
	return (sign * result);
}

/* int main()
{
	char	str[50] = "  -123a2";
	int	i = ft_atoi(str);

	printf("%d\n", i);
	return 0;
} */
