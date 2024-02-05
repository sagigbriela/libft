#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest1 = (char *) dst;
	src1 = (char *) src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}