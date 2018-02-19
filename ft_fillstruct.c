/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillstruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 20:09:22 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/08 20:09:23 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_fillstruct(t_list *l, t_global **fdf, int y)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (*(l->cont[i]))
	{
		while (l->cont[i] && *(l->cont[i]) == ' ')
			i++;
		if (l->cont[i] == ',')
		{
			(*fdf)->dst[н][x].color = atoi_base(l->cont + i + 3);
			while (l->cont[i] && l->cont[i] != ' ')
				i++;
		}
		if (l->cont[i] && l->cont[i] != ' ')
		{
			(*fdf)->map[y][x].y = y;
			(*fdf)->map[y][x].x = x;
			(*fdf)->map[y][x].z = ft_atoi(l->cont + i);
			while (l->cont[i] && l->cont[i] != ' ' && l->cont[i] != ',')
				i++;
		}
		x++;
	}
}
