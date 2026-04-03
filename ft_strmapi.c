#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char	test_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_isalpha(c));
	return (c);
}

int	main(void)
{
	char	*s1 = "eeeeeeeeee";
	char	*res;

	res = ft_strmapi(s1, test_func);
	if (res)
	{
		printf("%s\n", res);
		free(res);
	}
	return (0);
} */
