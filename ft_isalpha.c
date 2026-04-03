#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = 'A';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
} */
