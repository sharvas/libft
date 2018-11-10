/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:16:06 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/10 10:24:53 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = (char *)dst;
	while (i < len && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	while (i < len)
	{
		*dst = '\0';
		i++;
		dst++;
	}
	return (cpy);
}
