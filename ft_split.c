#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

size_t	find_next_non_delimiter(const char *s, char c, size_t start)
{
	while (s[start] == c)
		start++;
	return (start);
}

size_t	find_next(const char *s, char c, size_t start)
{
	while (s[start] != c && s[start] != '\0')
		start++;
	return (start);
}

static char	**free_split(const char **dest, size_t n)
{
	while (n--)
		free((void *)dest[n]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	countstr;
	size_t	i;
	char	**dest;

	if (!s)
		return (NULL);
	countstr = count_words(s, c);
	dest = (char **)malloc((countstr + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < countstr)
	{
		s += find_next_non_delimiter(s, c, 0);
		dest[i] = ft_substr(s, 0, find_next(s, c, 0));
		if (!dest[i])
			return (free_split((const char **)dest, i));
		s += find_next(s, c, 0);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}