/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 20:08:48 by apyltsov          #+#    #+#             */
/*   Updated: 2018/01/31 20:08:50 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	read_map(char *name_file, t_global *fdf)
{
	int		fd;
	char	*line;
	t_lst	*list;

	fdf->cy = 0;
	if ((fd = open(name_file, O_RDONLY)) <= 0)
	{
		perror("error");
		exit(1);
	}
	list = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		ft_createlist(&list, line);
		(fdf->cy)++;
	}
	close(fd);
	if (!(fdf->map = (t_point **)ft_memalloc(sizeof(t_point *) * fdf->cy)))
	{
		ft_freeshka((void ***)&(fdf->map), fdf->cy);
		perror("error");
		exit(1);
	}
	parse_map(fdf, &list);
}

void	parse_map(t_global *fdf, t_lst **list)
{
	int		y;
	t_lst	*cur;

	fdf->cx = ft_count_words((*list)->cont, ' ');
	y = 0;
	while ((*list))
	{
		if ((int)ft_count_words((*list)->cont, ' ') != fdf->cx)
			exit((int)write(2, "Map error\n", 10));
		if (!(fdf->map[y] = (t_point *)ft_memalloc(sizeof(t_point) *
			(fdf->cx + 1))))
		{
			ft_freeshka((void ***)&(fdf->map), fdf->cy);
			perror("error");
			exit(1);
		}
		parse_line(fdf, (*list)->cont, y);
		cur = *list;
		(*list) = (*list)->next;
		free(cur->cont);
		free(cur);
		y++;
	}
}

void	parse_line(t_global *fdf, char *line, int y)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (line[i])
	{
		while (line[i] && line[i] == ' ')
			i++;
		if (line[i] && line[i] != ' ')
		{
			fdf->map[y][x].y = y;
			fdf->map[y][x].x = x;
			fdf->map[y][x].z = ft_atoi(line + i);
			while (line[i] && line[i] != ' ' && line[i] != ',')
				i++;
			if (line[i] == ' ' || line[i] == '\0')
				fdf->map[y][x].color = 0xFFFFFF;
			else
				fdf->map[y][x].color = atoi_base(line + i + 3);
			while (line[i] && line[i] != ' ')
				i++;
		}
		x++;
	}
}

void	ft_createlist(t_lst **list, char *content)
{
	t_lst	*time;
	t_lst	*elem;

	time = *list;
	elem = (t_lst *)ft_memalloc(sizeof(t_lst));
	elem->cont = content;
	elem->next = NULL;
	if (time == NULL)
		*list = elem;
	else
	{
		while (time->next)
			time = time->next;
		time->next = elem;
	}
}
