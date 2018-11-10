/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:53:56 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/08 18:49:32 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	h;
	int	n;
	int	s;

	h = 0;
	while (haystack[h])
	{
		n = 0;
		s = h;
		while (needle[n] && haystack[h] == needle[n])
		{
			n++;
			h++;
		}
		if (!needle[n])
			return ((char*)&haystack[s]);
		else
			h = s;
		h++;
	}
	if (!needle[0])
		return ((char*)&haystack[0]);
	return (NULL);
}
