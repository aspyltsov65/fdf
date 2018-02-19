/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:41:46 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/24 16:41:49 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*j;

	if (alst && *alst && del)
	{
		while (*alst != NULL)
		{
			j = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = j;
		}
	}
}
