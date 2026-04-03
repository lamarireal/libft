#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = '~';
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
	return (0);
} */
