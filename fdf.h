/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 20:53:53 by apyltsov          #+#    #+#             */
/*   Updated: 2018/01/23 20:53:56 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <math.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include "get_next_line.h"

# define H 800
# define W 800

typedef struct		s_lst
{
	char			*cont;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_point
{
	double			x;
	double			y;
	double			z;
	long int		color;
}					t_point;

typedef struct		s_global
{
	int				cy;
	int				cx;
	void			*mlx_ptr;
	void			*win;
	void			*img_ptr;
	t_point			centre;
	t_point			**map;
}					t_global;

unsigned int		atoi_base(char *str);
void				read_map(char *name_file, t_global *fdf);
void				ft_createlist(t_lst **list, char *content);
void				ft_freelist(t_lst **head);
void				ft_freeshka(void ***dst, size_t i);
void				ft_drawmap(t_global *fdf);
void				print_line(t_global *fdf, t_point *p0, t_point *p1);
int					ft_key_hook(int keycode, t_global *mlx_ptr);
void				ft_rotation_z(t_global **fdf, double a);
void				ft_rotation_y(t_global **fdf, double a);
void				ft_rotation_x(t_global **fdf, double a);
void				ft_move(t_global **fdf, int keycode);
void				ft_change_centre(t_global **fdf, int keycode);
void				ft_scale(t_global **fdf, int keycode);
void				ft_scale_map(t_global **fdf);
void				parse_map(t_global *fdf, t_lst **list);
void				parse_line(t_global *fdf, char	*line, int y);
void				my_mlx_pixel_put(t_global *fdf, int x, int y, int color);
void				my_clear_window(t_global *fdf);

#endif
