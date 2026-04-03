#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t			tot_size;
	unsigned char	*num;

	if (!n || !size)
		return (malloc(0));
	if (n > ((size_t)-1) / size)
		return (NULL);
	tot_size = n * size;
	num = (unsigned char *) malloc(tot_size);
	if (num == NULL)
		return (NULL);
	ft_memset(num, 0, tot_size);
	return (num);
}

/* int	main(void)
{
	int	*num;
	int	*numorg;

	num = (int*) ft_calloc(10, sizeof(int));
	numorg = (int*) calloc(10, sizeof(int));
	if (!num || !numorg)
		return (1);
	for (int i = 0; i < 20; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf("%d ", numorg[i]);
	}
	free(num);
	free(numorg);
	return (0);
} */
