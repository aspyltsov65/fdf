/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 16:44:19 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/13 16:44:20 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_move(t_global **fdf, int keycode)
{
	int	y;
	int	x;

	y = 0;
	while (y < (*fdf)->cy)
	{
		x = 0;
		while (x < (*fdf)->cx)
		{
			if (keycode == 124)
				(*fdf)->map[y][x].x = (*fdf)->map[y][x].x + 20;
			else if (keycode == 123)
				(*fdf)->map[y][x].x = (*fdf)->map[y][x].x - 20;
			else if (keycode == 125)
				(*fdf)->map[y][x].y = (*fdf)->map[y][x].y + 20;
			else if (keycode == 126)
				(*fdf)->map[y][x].y = (*fdf)->map[y][x].y - 20;
			x++;
		}
		y++;
	}
	ft_change_centre(fdf, keycode);
}

void	ft_change_centre(t_global **fdf, int keycode)
{
	if (keycode == 124)
		(*fdf)->centre.x = (*fdf)->centre.x + 20;
	else if (keycode == 123)
		(*fdf)->centre.x = (*fdf)->centre.x - 20;
	else if (keycode == 125)
		(*fdf)->centre.y = (*fdf)->centre.y + 20;
	else if (keycode == 126)
		(*fdf)->centre.y = (*fdf)->centre.y - 20;
	else if (keycode == 69)
	{
		(*fdf)->centre.x = W / 2;
		(*fdf)->centre.y = H / 2;
	}
	else if (keycode == 78)
	{
		(*fdf)->centre.x = W / 2;
		(*fdf)->centre.y = H / 2;
	}
}

void	ft_scale(t_global **fdf, int keycode)
{
	int	x;
	int	y;

	y = -1;
	while (++y < (*fdf)->cy && (x = -1))
		while (++x < (*fdf)->cx)
			if (keycode == 69)
			{
				(*fdf)->map[y][x].x = ((*fdf)->map[y][x].x -
				W / 2) * 1.5 + W / 2;
				(*fdf)->map[y][x].y = ((*fdf)->map[y][x].y -
				H / 2) * 1.5 + H / 2;
				(*fdf)->map[y][x].z = (*fdf)->map[y][x].z * 1.5;
			}
			else
			{
				(*fdf)->map[y][x].x = ((*fdf)->map[y][x].x -
				W / 2) / 1.5 + W / 2;
				(*fdf)->map[y][x].y = ((*fdf)->map[y][x].y -
				H / 2) / 1.5 + H / 2;
				(*fdf)->map[y][x].z = (*fdf)->map[y][x].z / 1.5;
			}
	ft_change_centre(fdf, keycode);
}

void	ft_scale_map(t_global **fdf)
{
	int			x;
	int			y;
	double		max;

	max = (*fdf)->cx >= (*fdf)->cy ? (*fdf)->cx : (*fdf)->cy;
	y = -1;
	max = H / max;
	y = -1;
	while (++y < (*fdf)->cy)
	{
		x = -1;
		while (++x < (*fdf)->cx)
		{
			(*fdf)->map[y][x].x = ((*fdf)->map[y][x].x -
			(*fdf)->cx / 2) * max + W / 2;
			(*fdf)->map[y][x].y = ((*fdf)->map[y][x].y -
			(*fdf)->cy / 2) * max + H / 2;
			(*fdf)->map[y][x].z *= max;
		}
	}
	(*fdf)->centre.x = W / 2;
	(*fdf)->centre.y = H / 2;
}
