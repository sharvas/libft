/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 06:51:18 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/06 06:51:20 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*a;
	char		*b;

	b = (char*)dst;
	a = (const char*)src;
	if (a > b)
		ft_memcpy(b, a, n);
	else
	{
		while (n)
		{
			n--;
			b[n] = a[n];
		}
	}
	return (dst);
}
