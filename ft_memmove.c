/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:57:30 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/10 11:48:54 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cpy;

	cpy = dst;
	if (src < dst)
		while (len--)
			cpy[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy(dst, src, len);
	return ((void *)dst);
}
