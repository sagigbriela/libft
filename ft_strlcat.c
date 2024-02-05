#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	char	*str;

	str = (char *)src;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(str);
	if (dstlen >= size)
		return (srclen + size);
	i = 0;
	while (src[i] && dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}