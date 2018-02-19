/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 21:06:24 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/02 21:06:31 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	r;
	size_t			i;

	r = (unsigned char)c;
	s = (unsigned char*)src;
	i = 0;
	while (n-- > 0)
	{
		if (s[i] == r)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
