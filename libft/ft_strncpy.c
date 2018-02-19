/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 22:53:33 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/03 22:53:36 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char*)src;
	d = (char*)dst;
	while (len-- > 0)
	{
		if (*s != '\0')
			*d++ = *s++;
		else
			*d++ = '\0';
	}
	return (dst);
}
