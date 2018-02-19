/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 19:38:11 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/09 19:38:14 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

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
