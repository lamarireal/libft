#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	y;

	if (!s)
		return (NULL);
	y = ft_strlen(s);
	if (start >= y)
		return (ft_strdup(""));
	if (len > y - start)
		len = y - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	const char	str[11] = "qwertyuiop";
	char *buka = ft_substr(str, 3, 4);

	printf("%s\n", buka);
	free((void *)buka);
	return (0);
} */
