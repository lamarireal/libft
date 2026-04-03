#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (dest);
	if ((char *)dest == (char *) src || n == 0)
		return (dest);
	i = 0;
	if ((char *)dest < (char *)src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	str[] = "helloyuiop";
	char	str1[] = "helloyuiop";

	ft_memmove(str + 2, str, 5);
	memmove(str1 + 2, str1, 5);
	printf("My ft:%s\n", str);
	printf("Original ft:%s\n", str1);
	return (0);
} */
