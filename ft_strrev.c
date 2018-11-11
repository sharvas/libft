#include "libft.h"

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}
