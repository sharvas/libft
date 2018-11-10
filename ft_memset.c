/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:50:15 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/09 14:03:50 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*b1;

	uc = (unsigned char)c;
	b1 = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b1[i] = uc;
		i++;
	}
	return (b1);
}
