#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*dest;

	if (!s1 || !s2)
	{
		if (s1)
			return ((char *)s2);
		else if (s2)
			return ((char *)s1);
		else
			return (ft_strdup(""));
	}
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (*s1)
		dest[i++] = *s1++;
	while (*s2)
		dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}