/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 21:12:02 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/04 21:12:05 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		res;
	size_t		num;

	d = dst;
	s = src;
	num = n;
	while (*d != '\0' && num-- != 0)
		d++;
	res = d - dst;
	num = n - res;
	if (num == 0)
		return (res + ft_strlen(s));
	while (*s != '\0')
	{
		if (num != 1)
		{
			*d++ = *s;
			num--;
		}
		s++;
	}
	*d = '\0';
	return (res + (s - src));
}
