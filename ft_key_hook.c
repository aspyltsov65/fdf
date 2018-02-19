/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:16:12 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/12 18:16:17 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_key_hook(int keycode, t_global *fdf)
{
	if (keycode == 53)
	{
		ft_freeshka((void ***)&fdf->map, fdf->cy);
		exit(0);
	}
	if (keycode == 2)
		ft_rotation_z(&fdf, 0.1);
	else if (keycode == 0)
		ft_rotation_z(&fdf, -0.1);
	else if (keycode == 12)
		ft_rotation_y(&fdf, 0.1);
	else if (keycode == 14)
		ft_rotation_y(&fdf, -0.1);
	else if (keycode == 13)
		ft_rotation_x(&fdf, 0.1);
	else if (keycode == 1)
		ft_rotation_x(&fdf, -0.1);
	else if (keycode >= 123 && keycode <= 126)
		ft_move(&fdf, keycode);
	else if (keycode == 78 || keycode == 69)
		ft_scale(&fdf, keycode);
	mlx_clear_window(fdf->mlx_ptr, fdf->win);
	ft_drawmap(fdf);
	return (0);
}
