#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	k;

	if (!s)
		return (0);
	count = 0;
	k = 0;
	while (*s)
	{
		if (*s == c)
			k = 0;
		else if (!k)
		{
			k = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_word(char const *s, char c)
{
	size_t	size;
	char	*str;

	size = 0;
	if (!s)
		return (NULL);
	while (s[size] != c && s[size])
		size++;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	size = 0;
	while (*s != c && *s)
		str[size++] = *(s++);
	str[size] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	k;

	if (!s)
		return (NULL);
	len = ft_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	len = 0;
	k = 0;
	while (*s)
	{
		if (*s == c)
			k = 0;
		else if (!k)
		{
			if (!(str[len] = ft_word(s, c)))
				return (NULL);
			len += ++k;
		}
		s++;
	}
	str[len] = NULL;
	return (str);
}
