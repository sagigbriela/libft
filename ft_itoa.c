#include <libft.h>

int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	n_long;
	int		len;
	int		len_copy;
	char	*dest;

	n_long = n;
	len = ft_numlen(n_long);
	len_copy = len;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len_copy] = '\0';
	if (n_long < 0)
	{
		dest[0] = '-';
		n_long = -n_long;
	}
	else if (n_long == 0)
		dest[0] = '0';
	while (n_long > 0)
	{
		dest[--len] = '0' + (n_long % 10);
		n_long /= 10;
	}
	return (dest);
}