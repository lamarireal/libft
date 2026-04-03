#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/* int	main(void)
{
	char	c;
	char	result;

	c = 'R';
	result = ft_tolower(c);
	printf("My ft: %c\n", result);
	result = tolower(c);
	printf("Original ft: %c\n", result);
} */
