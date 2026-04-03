#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		y;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	y = 0;
	while (y < len2)
		str[i++] = s2[y++];
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char	s1[11] = "qwertyuiop";
	char	s2[11] = "asdfghjklz";

	char	*str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	free((void *)str);
	return 0;
} */
