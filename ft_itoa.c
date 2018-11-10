/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:48:38 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/09 16:35:06 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static	ft_count(int n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*num;
	size_t		len;
	unsigned int	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count(n);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (!(num = ft_strnew(len + 1)))
		return (NULL);
	while (nb > 0)
	{
		num[--len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		num[0] = '-';
	if (n == 0)
		num[0] = '0';
	return (num);
}
