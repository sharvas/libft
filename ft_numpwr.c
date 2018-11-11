#include "libft.h"

int	ft_numpwr(int nb, int times)
{
	int	rez;
	int	i;

	i = 1;
	rez = nb;
	if (times == 0)
		return (1);
	while (i++ < times)
		rez *= nb;
	return (rez);
}
