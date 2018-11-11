/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:53:48 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/11 11:53:51 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*cpy;

	i = 0;
	while (s1[i] != '\0')
		i++;
	cpy = (char *)malloc(sizeof(char) * (n + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
