/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:27:50 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/05 15:27:52 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*needle;

	needle = NULL;
	while (*s)
	{
		if (*s == c)
			needle = (char*)s;
		s++;
	}
	if (*s == c)
		needle = (char*)s;
	return (needle);
}
