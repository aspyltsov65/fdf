/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:41:34 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/24 17:41:37 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*j;
	t_list	*n;

	j = NULL;
	if (!f)
		return (NULL);
	while (!(j = f(lst)) && lst)
		lst = lst->next;
	if (!j || !(n = ft_lstnew(j->content, j->content_size)))
		return (NULL);
	new_list = n;
	if (lst)
		lst = lst->next;
	while (lst)
	{
		if ((j = f(lst)))
		{
			if (!(n->next = ft_lstnew(j->content, j->content_size)))
				return (NULL);
			n = n->next;
		}
		lst = lst->next;
	}
	return (new_list);
}
