#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char str[11] = "hellohello";
	int val = 'D';
	int num = 10;

	ft_memset(str, val, num);
	ft_memset(str, 'A', 5);
	printf("My ft: %s\n", str);

	memset(str, val, num);
	memset(str, 'A', 5);
	printf("Original ft: %s\n", str);

	return (0);
} */
