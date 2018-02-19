/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 19:15:49 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/12 19:15:52 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rotation_z(t_global **fdf, double a)
{
	int		y;
	int		x;
	t_point	temp;
	double	s;
	double	c;

	c = cos(a);
	s = sin(a);
	y = 0;
	while (y < (*fdf)->cy)
	{
		x = 0;
		while (x < (*fdf)->cx)
		{
			temp = (*fdf)->map[y][x];
			temp.x = ((*fdf)->map[y][x].x - (*fdf)->centre.x) * c -
			((*fdf)->map[y][x].y - (*fdf)->centre.y) * s + (*fdf)->centre.x;
			temp.y = ((*fdf)->map[y][x].x - (*fdf)->centre.x) * s +
			((*fdf)->map[y][x].y - (*fdf)->centre.y) * c + (*fdf)->centre.y;
			(*fdf)->map[y][x] = temp;
			x++;
		}
		y++;
	}
}

void	ft_rotation_y(t_global **fdf, double a)
{
	int		y;
	int		x;
	t_point temp;
	double	s;
	double	c;

	c = cos(a);
	s = sin(a);
	y = 0;
	while (y < (*fdf)->cy)
	{
		x = 0;
		while (x < (*fdf)->cx)
		{
			temp = (*fdf)->map[y][x];
			temp.x = ((*fdf)->map[y][x].x - (*fdf)->centre.x) * c -
			(*fdf)->map[y][x].z * s + (*fdf)->centre.x;
			temp.z = (*fdf)->map[y][x].z * c +
			((*fdf)->map[y][x].x - (*fdf)->centre.x) * s;
			(*fdf)->map[y][x] = temp;
			x++;
		}
		y++;
	}
}

void	ft_rotation_x(t_global **fdf, double a)
{
	int		y;
	int		x;
	t_point temp;
	double	s;
	double	c;

	c = cos(a);
	s = sin(a);
	y = 0;
	while (y < (*fdf)->cy)
	{
		x = 0;
		while (x < (*fdf)->cx)
		{
			temp = (*fdf)->map[y][x];
			temp.y = ((*fdf)->map[y][x].y - (*fdf)->centre.y) * c -
			(*fdf)->map[y][x].z * s + (*fdf)->centre.y;
			temp.z = (*fdf)->map[y][x].z * c +
			((*fdf)->map[y][x].y - (*fdf)->centre.y) * s;
			(*fdf)->map[y][x] = temp;
			x++;
		}
		y++;
	}
}
