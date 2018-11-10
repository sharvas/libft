/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:31:41 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/10 10:37:31 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (size > (i + j + 1)))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (size != i)
		dst[i + j] = '\0';
	return (i + len);
}
