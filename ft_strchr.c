#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/* int	main(void)
{
	const char	*text = "guguguguguguguguguguguguguguohellogugu";
	char	ch = 'o';
	char	*result_custom = ft_strchr(text, ch);
	char	*result_std = strchr(text, ch);

	printf("My ft: %s\n", result_custom);
	printf("Original ft: %s\n", result_std);

	return (0);
} */
