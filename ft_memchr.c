#include <libft.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *) str;
	while (i < n)
	{
		if (dest[i] == c)
			return (&dest[i]);
		i++;
	}
	return (0);
}