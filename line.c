/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:57:27 by apyltsov          #+#    #+#             */
/*   Updated: 2018/01/23 18:57:29 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_line(t_global *fdf, t_point *p0, t_point *p1)
{
	double	x;
	double	y;

	x = p0->x;
	y = p0->y;
	if (fabs(p1->y - p0->y) > fabs(p1->x - p0->x))
	{
		while (p0->y > p1->y ? y >= p1->y : y <= p1->y)
		{
			x = ((y - p0->y) / (p0->y - p1->y) * (p0->x - p1->x) + p0->x);
			my_mlx_pixel_put(fdf, x, y, p0->color);
			p1->y > p0->y ? y++ : y--;
		}
	}
	else
	{
		while (p0->x > p1->x ? x >= p1->x : x <= p1->x)
		{
			y = ((x - p0->x) / (p0->x - p1->x) * (p0->y - p1->y) + p0->y);
			my_mlx_pixel_put(fdf, x, y, p0->color);
			p1->x > p0->x ? x++ : x--;
		}
	}
}

void	my_mlx_pixel_put(t_global *fdf, int x, int y, int color)
{
	int	a;
	int	b;
	int	c;
	int	*arr;

	if (x >= 0 && x < W && y >= 0 && y < H)
	{
		arr = (int *)mlx_get_data_addr(fdf->img_ptr, &a, &b, &c);
		arr[H * y + x] = color;
	}
}

void	ft_drawmap(t_global *fdf)
{
	int	y;
	int x;

	y = 0;
	x = 0;
	while (y < fdf->cy)
	{
		while (x < fdf->cx)
		{
			if (x + 1 < fdf->cx)
				print_line(fdf, &fdf->map[y][x], &fdf->map[y][x + 1]);
			if (y + 1 < fdf->cy)
				print_line(fdf, &fdf->map[y][x], &fdf->map[y + 1][x]);
			x++;
		}
		x = 0;
		y++;
	}
}
