#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (!s)
		return ;
	str = ((unsigned char *)s);
	i = 0;
	while (i < n)
		str[i++] = '\0';
}

/* int	main(void)
{
	char str[11];
	char strb[11];

	for (int i = 0; i < 11; i++) {
		str[i] = i + 1;
		strb[i] = i + 1;
	}
	ft_bzero(str, 5);
	bzero(strb, 5);
	printf("ft_bzero:  ");
	for (int i = 0; i < 11; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	printf("bzero:     ");
	for (int i = 0; i < 11; i++) {
		printf("%d ", strb[i]);
	}
	printf("\n");
	return (0);
} */
