#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		val;
	size_t				i;

	ptr = (const unsigned char *)s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == val)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}

/* int	main()
{
	unsigned char data[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	size_t length = sizeof(data);
	int search = 'd';
	void *result_std = memchr(data, search, length);
	void *result_custom = ft_memchr(data, search, length);

	printf("My ft:  %p\n", result_custom);
	printf("Original ft: %p\n", result_std);

	return (0);
} */
