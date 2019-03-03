/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:52:16 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/20 16:56:23 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_line(const int fd, char **line, char *str, char **mem)
{
	if (ft_strchr(str, '\n') == NULL)
	{
		if (!(*line = ft_strjoinfree_s1(*line, str)))
			return (-1);
		ft_strclr(str);
	}
	else
	{
		mem[fd] = ft_strchr(str, '\n') + 1;
		*ft_strchr(str, '\n') = '\0';
		if (!(*line = ft_strjoinfree_s1(*line, str)))
			return (-1);
		return (1);
	}
	return (0);
}

static int	ft_get_from_mem(const int fd, char **line, char **mem, char *str)
{
	if (mem[fd])
	{
		if (ft_get_line(fd, line, mem[fd], mem) == 1)
		{
			ft_freestr(str);
			return (1);
		}
	}
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static char	*mem[MAX_FD];
	char		*s;
	int			k;

	if (BUFF_SIZE < 1 || line == NULL || fd < 0 || !(s = ft_strnew(BUFF_SIZE)))
		return (-1);
	if (fd >= MAX_FD || !(*line = ft_strnew(BUFF_SIZE)))
		return (-1);
	k = 1;
	if (ft_get_from_mem(fd, line, mem, s))
		return (1);
	while (k > 0)
	{
		if ((k = read(fd, s, BUFF_SIZE)) == -1)
			return (-1);
		if (ft_get_line(fd, line, s, mem) == 1)
			return (1);
		else
			ft_freestr(s);
		if (k == 0 && !*line[0])
			return (0);
		else if (k == 0 && *line[0])
			return (1);
	}
	return (-1);
}
