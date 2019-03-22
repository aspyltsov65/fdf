/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 16:38:29 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/01 16:38:31 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_global	*fdf;

	if (argc == 2)
	{
		if (!(fdf = (t_global*)malloc(sizeof(*fdf))))
		{
			perror("error");
			exit(1);
		}
		read_map(argv[1], fdf);
		fdf->mlx_ptr = mlx_init();
		fdf->win = mlx_new_window(fdf->mlx_ptr, W, H, "fdf");
		fdf->img_ptr = mlx_new_image(fdf->mlx_ptr, W, H);
		ft_scale_map(&fdf);
		ft_drawmap(fdf);
		mlx_put_image_to_window(fdf->mlx_ptr, fdf->win, fdf->img_ptr, 0, 0);
		mlx_hook(fdf->win, 2, 0, ft_key_hook, fdf);
		mlx_loop((void *)fdf->mlx_ptr);
	}
	else
		ft_putstr("Usage: ./fdf <filename>\n");
	return (0);
}
