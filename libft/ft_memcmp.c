/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 22:03:36 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/02 22:03:44 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	uint8_t	*f;
	uint8_t	*t;
	size_t	i;

	f = (uint8_t*)s1;
	t = (uint8_t*)s2;
	i = 0;
	while (n > 0)
	{
		if (f[i] != t[i])
			return (f[i] - t[i]);
		i++;
		n--;
	}
	return (0);
}
