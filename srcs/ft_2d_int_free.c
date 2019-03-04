/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_int_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 17:42:06 by svaskeli          #+#    #+#             */
/*   Updated: 2019/03/03 17:42:07 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_2d_int_free(int **array, int size)
{
	int i;

	i = 0;
	while (i < size)
		free(array[i++]);
	free(array);
	array = NULL;
}
