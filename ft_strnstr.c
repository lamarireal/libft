#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		y = 0;
		while (big[i + y] != '\0'
			&& little[y] != '\0'
			&& big[i + y] == little[y]
			&& (i + y) < len)
		{
			y++;
		}
		if (little[y] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	big[16] = "guba lucia bom";
	char	little[5] = "u";

	printf("ft: %s\n", ft_strnstr(big, little, 12));
	return (0);
} */
