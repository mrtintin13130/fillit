/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 12:03:17 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/21 20:15:14 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include "libft/libft.h"

static int	ft_copy(char *new, char **tab, const int fd, char **line)
{
	if (new)
	{
		*new = '\0';
		*line = ft_strdup(tab[fd]);
		new++;
		ft_memmove(tab[fd], new, ft_strlen(new) + 1);
		return (1);
	}
	return (0);
}

static int	check_line(char **line, char **tab, const int fd)
{
	char	*new;

	new = ft_strchr(tab[fd], '\n');
	if (ft_copy(new, tab, fd, line))
		return (1);
	if (ft_strlen(tab[fd]) > 0)
	{
		*line = ft_strdup(tab[fd]);
		*tab[fd] = '\0';
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	int			res;
	static char	*tab[BUFF_SIZE];

	if (!line || fd < 0)
		return (-1);
	if (tab[fd] == NULL)
		tab[fd] = ft_strnew(0);
	while (!ft_strchr(tab[fd], '\n'))
	{
		res = read(fd, buf, BUFF_SIZE);
		if (res == 0)
			return (check_line(line, tab, fd));
		if (res == -1)
			return (res);
		buf[res] = '\0';
		tmp = ft_strjoin(tab[fd], buf);
		free(tab[fd]);
		tab[fd] = tmp;
	}
	return (check_line(line, tab, fd));
}
