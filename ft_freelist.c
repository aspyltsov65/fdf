/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 15:31:42 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/09 15:31:44 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_freelist(t_lst **head)
{
	t_lst	*time;

	while (*head)
	{
		free((*head)->cont);
		time = (*head)->next;
		free(*head);
		*head = time;
	}
}
