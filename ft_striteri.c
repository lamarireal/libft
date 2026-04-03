#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	test_func(unsigned int i, char *c)
{
	if (i % 2 == 0)
        *c = ft_isalpha(*c);
}

int	main(void)
{
	char	s[] = "eeeeeeeeee";

	ft_striteri(s, test_func);
	printf("%s\n", s);
	return (0);
} */
