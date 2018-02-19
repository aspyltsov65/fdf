/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:38:21 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/06 22:38:24 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char*)s1;
	s = (unsigned char*)s2;
	while ((d[i] != '\0' || s[i] != '\0') && n != 0)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
		n--;
	}
	return (0);
}
