/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:33:57 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/11 11:54:15 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	int		mark;
	char	*s1;

	i = 0;
	ch = (char)c;
	mark = -1;
	s1 = (char *)s;
	while (s1[i] != '\0')
	{
		if (s1[i] == ch)
			mark = i;
		i++;
	}
	if (ch == '\0' && s1[i] == '\0')
		return (&s1[i]);
	if (mark == -1)
		return (NULL);
	return (&s1[mark]);
}
