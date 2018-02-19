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
			mlx_pixel_put(fdf->mlx_ptr, fdf->win, x, y, p0->color);
			p1->y > p0->y ? y++ : y--;
		}
	}
	else
	{
		while (p0->x > p1->x ? x >= p1->x : x <= p1->x)
		{
			y = ((x - p0->x) / (p0->x - p1->x) * (p0->y - p1->y) + p0->y);
			mlx_pixel_put(fdf->mlx_ptr, fdf->win, x, y, p0->color);
			p1->x > p0->x ? x++ : x--;
		}
	}
}
