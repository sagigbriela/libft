#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*search;

	i = 0;
	j = 0;
	str = (char *) big;
	search = (char *) little;
	if (ft_strlen(search) == 0)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		if (ft_strncmp(&str[i], &search[j], ft_strlen(search)) == 0
			&& i + (ft_strlen(search) - 1) < len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}