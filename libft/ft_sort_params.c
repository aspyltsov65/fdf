/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 21:05:02 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/24 21:05:05 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap(char **s1, char **s2)
{
	char *s;

	s = *s2;
	*s2 = *s1;
	*s1 = s;
}

void		ft_sort_params(size_t count, char **str)
{
	size_t i;

	i = 1;
	while (i < count - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			ft_swap(&str[i], &str[i + 1]);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < count)
	{
		ft_putstr(str[i]);
		write(1, "\n", 1);
		i++;
	}
}
