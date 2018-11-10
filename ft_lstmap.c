/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:15:05 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/10 12:42:18 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n1_lst;
	t_list *n2_lst;

	if (!lst || !(*f))
		return (NULL);
	if (!(n1_lst = (*f)(lst)))
		return (NULL);
	n2_lst = n1_lst;
	while (lst->next)
	{
		lst = lst->next;
		n2_lst->next = (*f)(lst);
		if (!n2_lst->next)
			return (NULL);
		n2_lst = n2_lst->next;
	}
	return (n1_lst);
}
