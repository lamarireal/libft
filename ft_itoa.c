#include "libft.h"

static size_t	digits(long num)
{
	size_t	size;

	size = 1;
	if (num == 0)
		return (2);
	if (num < 0)
	{
		size++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	size;
	char	*m;
	size_t	i;

	num = n;
	size = digits(num);
	m = malloc(size * sizeof(char));
	if (!m)
		return (NULL);
	i = size - 2;
	if (num < 0)
	{
		num = -num;
		m[0] = '-';
	}
	if (num == 0)
		m[0] = '0';
	while (num > 0)
	{
		m[i--] = '0' + num % 10;
		num /= 10;
	}
	m[size - 1] = 0;
	return (m);
}

/* int	main(void)
{
	int	n = 54;
	char	*str = ft_itoa(n);

	printf("%s\n", str);
	return (0);
} */
