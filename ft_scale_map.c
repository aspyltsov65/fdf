/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 19:31:48 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/17 19:31:49 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_scale_map(t_global **fdf)
{
	int		x;
	int		y;
	double		max;

	//printf("cx - %d cy - %d\n", (*fdf)->cx, (*fdf)->cy);
	max = (*fdf)->cx > (*fdf)->cy ? (*fdf)->cx : (*fdf)->cy;
	//printf("%f\n", max);
	y = -1;
	max = H / max;
	//printf("max %f\n", max);
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
