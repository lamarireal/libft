#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_parts(char **arr, size_t filled)
{
	size_t	i;

	if (!arr)
		return ;
	i = 0;
	while (i < filled)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_array(char **arr, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		len = word_len(s, c);
		arr[i] = malloc(len + 1);
		if (!arr[i])
			return (free_parts(arr, i), 0);
		ft_memcpy(arr[i], s, len);
		arr[i][len] = '\0';
		s += len;
		i++;
	}
	arr[words] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!fill_array(arr, s, c, words))
		return (NULL);
	return (arr);
}

/* int	main(void)
{
	char s[100] = "0aaaaaaaaaass1aaaaaaaaaaas2aaas3asss4aaaaas5as6a";
	char c = 's';
	int	i;

	char **arr = ft_split(s, c);
	i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
} */
