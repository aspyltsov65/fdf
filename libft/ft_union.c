/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:34:43 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/25 13:34:48 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(char *s1, int j, char c)
{
	int n;

	n = 0;
	while (n < j)
	{
		if (s1[n] == c)
			return (0);
		n++;
	}
	return (1);
}

void			ft_union(size_t count, char **src)
{
	unsigned int j;
	unsigned int i;

	i = 0;
	if (count == 3)
	{
		while (src[1][i] != '\0')
		{
			if (ft_check(src[1], i, src[1][i]) != 0)
			{
				write(1, &src[1][i], 1);
			}
			i++;
		}
		j = 0;
		while (src[2][j] != '\0')
		{
			if ((ft_check(src[2], j, src[2][j]) != 0 &&
				ft_check(src[1], i, src[2][j]) != 0))
				write(1, &src[2][j], 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
}
