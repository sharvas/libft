/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:56:49 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/10 12:41:08 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)ft_memalloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (content)
	{
		if ((new->content = ft_memalloc(content_size)))
			ft_memcpy(new->content, content, content_size);
		else
			return (NULL);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
