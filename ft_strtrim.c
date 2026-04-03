#include "libft.h"

static int	sett(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && sett(s1[start], set))
		start++;
	while (end > start && sett(s1[end - 1], set))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char	str[15] = "==-=SHOO-O--=-";
	char	s[3] = "=-";

	char	*wua = ft_strtrim(str, s);
	printf("%s\n", wua);
	free((void *)wua);
	return (0);
} */
