#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*org;
	int		i;

	org = (char *) s1;
	str = (char *)malloc(ft_strlen(org) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}