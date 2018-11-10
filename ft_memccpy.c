/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:19:49 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/09 14:44:12 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	uc;
	unsigned char	*dst1;
	unsigned char	*src1;

	uc = (unsigned char)c;
	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == uc)
			return (&dst1[i + 1]);
		i++;
	}
	return (NULL);
}
