#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*dest;
	int		len;

	dest = (char *) s;
	len = ft_strlen(dest);
	if ((char)c == '\0')
		return (&dest[len]);
	while (len >= 0)
	{
		if (dest[len] == c)
			return (&dest[len]);
		len--;
	}
	return (0);
}