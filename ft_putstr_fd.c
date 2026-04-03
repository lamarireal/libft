#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = ft_strlen((const char *)s);
	write(fd, s, len);
}

/* int	main(void)
{
	char	str[4] = "aaa";

	ft_putstr_fd(str, 1);
	return (0);
} */
