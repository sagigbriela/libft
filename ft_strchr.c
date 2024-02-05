#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	char	*dest;

	dest = (char *)s;
	while (*dest != '\0')
	{
		if (*dest == c)
			return (dest);
		dest++;
	}
	if ((char)c == '\0')
        return (dest);
    return (NULL);
}