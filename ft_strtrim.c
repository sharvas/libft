/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:29:40 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/11 12:00:27 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	start = 0;
	i = ft_strlen(s);
	end = i - 1;
	while (s[start] && (s[start] == ' ' || s[start] == '\t' ||
				s[start] == '\n'))
		start++;
	if (start == i)
		return (ft_strdup(""));
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	if (!(str = ft_strnew((end - start) + 1)))
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s[start++];
	return (str);
}
