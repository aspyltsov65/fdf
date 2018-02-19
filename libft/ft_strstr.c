/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:34:49 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/06 18:34:52 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;
	char			*dst;
	char			*src;

	dst = (char*)haystack;
	src = (char*)needle;
	i = 0;
	j = 0;
	if (src[j] == '\0')
		return (&dst[i]);
	while (dst[i] != '\0')
	{
		while (dst[i + j] == src[j])
		{
			if (src[j++ + 1] == '\0')
				return (&dst[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
