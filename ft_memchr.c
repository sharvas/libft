/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:56:16 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/10 10:19:58 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n != 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		return (ft_memchr(s + 1, c, --n));
	}
	return (0);
}
