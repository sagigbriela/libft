#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	char	*org;

	str = (char *) b;
	org = str;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return (org);
}