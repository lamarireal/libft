#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	if (!dest || !src)
		return (dest);
	p = (char *)src;
	q = (char *)dest;
	i = 0;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	src1[20] = "Hello, world!";
	char	src2[20] = "Hello, world!";
	char	dest1[20];
	char	dest2[20];

	printf("===== BASIC TEST =====\n");
	ft_memcpy(dest1, src1, 5);
	memcpy(dest2, src2, 5);
	printf("ft_memcpy: %.*s\n", 5, dest1);
	printf("memcpy:    %.*s\n\n", 5, dest2);

	printf("===== FULL COPY =====\n");
	ft_memcpy(dest1, src1, strlen(src1) + 1);
	memcpy(dest2, src2, strlen(src2) + 1);
	printf("ft_memcpy: %s\n", dest1);
	printf("memcpy:    %s\n\n", dest2);

	printf("===== ZERO COPY =====\n");
	ft_memcpy(dest1, src1, 0);
	memcpy(dest2, src2, 0);
	printf("ft_memcpy (no change): %s\n", dest1);
	printf("memcpy (no change):    %s\n\n", dest2);

	printf("===== SAME POINTER =====\n");
	char	same[20] = "Test string";
	ft_memcpy(same, same, 5);
	printf("Result (same pointer): %s\n\n", same);
	return (0);
} */
