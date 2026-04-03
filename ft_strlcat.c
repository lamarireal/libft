#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while (d_len < size && dst[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (d_len == size)
		return (size + s_len);
	while ((d_len + i < size - 1) && src[i])
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/* int	main(void)
{
	char	dst[10] = "wuaaaa";
	char	src[] = "nuh uh";

	int len = ft_strlcat(dst, src, 10);
	printf("Result: %s\n", dst);
	printf("Return: %d\n", len);
	return (0);
} */
