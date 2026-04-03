#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char s1[10] = "gBaa";
	char s2[10] = "gbaa";
	int n = 5;

	int x = ft_memcmp(s1, s2, n);
	int y = memcmp(s1, s2, n);
	printf("My ft: %d\n", x);
	printf("Original ft: %d\n", y);
	return (0);
} */
