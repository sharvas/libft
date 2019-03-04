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

static int	get_line(const int fd, char **line, char *str, char **mem)
{
	if (ft_strchr(str, '\n') == NULL)
	{
		if (!(*line = ft_strjoinfree_s1(*line, str)))
			return (-1);
		ft_strclr(mem[fd]);
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

static int	get_mem_line(const int fd, char **line, char *str, char **mem)
{
	char *tmp;

	if (ft_strchr(mem[fd], '\n') == NULL)
	{
		if (!(*line = ft_strjoinfree_s1(*line, mem[fd])))
			return (-1);
		ft_strclr(mem[fd]);
	}
	else
	{
		tmp = ft_strchr(mem[fd], '\n') + 1;
		*ft_strchr(mem[fd], '\n') = '\0';
		if (!(*line = ft_strjoinfree_s1(*line, mem[fd])))
			return (-1);
		mem[fd] = tmp;
		ft_freestr(str);
		return (1);
	}
	return (0);
}

static int	check_if_read(char **line, int k, char *str)
{
	if (k == 0 && !*line[0])
	{
		ft_freestr(str);
		return (0);
	}
	else if (k == 0 && *line[0])
	{
		ft_freestr(str);
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*mem[MAX_FD];
	char		*str;
	int			k;

	if (BUFF_SIZE < 1 || line == NULL || !(str = ft_strnew(BUFF_SIZE)))
		return (-1);
	if (fd < 0 || fd >= MAX_FD || !(*line = ft_strnew(BUFF_SIZE)))
		return (-1);
	k = 1;
	if (mem[fd])
		if (get_mem_line(fd, line, str, mem) == 1)
			return (1);
	while (k > 0)
	{
		if ((k = read(fd, str, BUFF_SIZE)) == -1)
			return (-1);
		if (get_line(fd, line, str, mem) == 1)
			return (1);
		if (check_if_read(line, k, str) == 1)
			return (1);
		else
			return (0);
	}
	ft_freestr(str);
	return (-1);
}
