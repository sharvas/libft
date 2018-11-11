#include "libft.h"

size_t	ft_listsize(char **list)
{
	size_t	len;

	if (!list)
		return (0);
	len = 0;
	while (*(list++))
		len++;
	return (len);
}
