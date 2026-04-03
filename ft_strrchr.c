#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			str = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (str);
}

/* int	main(void)
{
	const char	*text = "gugugugugugugugughellouguguguguguohellogugu";
	char	ch = 'o';
	char	*result_custom = ft_strrchr(text, ch);
	char	*result_std = strrchr(text, ch);

	printf("My ft: %s\n", result_custom);
	printf("Original ft: %s\n", result_std);

	return (0);
} */
