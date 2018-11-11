/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numpwr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:52:26 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/11 11:52:35 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numpwr(int nb, int times)
{
	int	rez;
	int	i;

	i = 1;
	rez = nb;
	if (times == 0)
		return (1);
	while (i++ < times)
		rez *= nb;
	return (rez);
}
