#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/* int	main(void)
{
	char	c;
	char	result;

	c = 'r';
	result = ft_toupper(c);
	printf("My ft: %c\n", result);
	result = toupper(c);
	printf("Original ft: %c\n", result);
} */
