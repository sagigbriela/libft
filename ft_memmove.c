#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (dest == NULL || source == NULL)
		return (NULL);
	if (dest < source)
	{
		while (n--)
			*dest++ = *source++;
	}
	else
	{
		dest += n;
		source += n;
		while (n--)
			*--dest = *--source;
	}
	return (dst);
}