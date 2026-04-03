#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char s1[10] = "gbaa";
	char s2[10] = "gaAa";
	int n = 2;

	int x = ft_strncmp(s1, s2, n);
	int y = strncmp(s1, s2, n);
	printf("My ft: %d\n", x);
	printf("Original ft: %d\n", y);
	return (0);
} */
