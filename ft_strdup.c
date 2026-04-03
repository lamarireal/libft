#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	cpy = malloc(i + 1);
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s, i + 1);
	return (cpy);
}

/* int	main(void)
{
	const char	str[10] = "qwertyuiop";
	const char	*cpy1 = ft_strdup(str);
	const char	*cpy2 = strdup(str);

	printf("Normal: %s\n", str);
	printf("My copy: %s\n", cpy1);
	printf("Orig copy: %s\n", cpy2);
	free((void *)cpy1);
	free((void *)cpy2);
	return (0);
} */
