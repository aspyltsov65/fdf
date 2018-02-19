/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 15:16:39 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/08 15:16:41 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_createlist(t_lst **list, char *content)
{
	t_lst	*time;
	t_lst	*elem;

	time = *list;
	elem = (t_lst *)ft_memalloc(sizeof(t_lst));
	elem->cont = content;
	elem->next = NULL;
	if (time == NULL)
		*list = elem;
	else
	{
		while (time->next)
			time = time->next;
		time->next = elem;
	}
}
