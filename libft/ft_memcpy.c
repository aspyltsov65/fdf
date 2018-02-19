/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 22:03:28 by apyltsov          #+#    #+#             */
/*   Updated: 2017/10/29 22:03:36 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	uint8_t	*r;
	uint8_t	*s;
	size_t	i;

	s = (uint8_t*)src;
	r = (uint8_t*)dst;
	i = 0;
	while (i < n)
	{
		r[i] = s[i];
		i++;
	}
	return (dst);
}
