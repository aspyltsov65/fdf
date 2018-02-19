/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:55:48 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/12 16:55:50 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*dst;

	if (s1 && s2)
	{
		i = (unsigned int)ft_strlen(s1);
		j = (unsigned int)ft_strlen(s2);
		dst = (char*)(malloc(sizeof(*dst) * (i + j + 1)));
		if (!dst)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[i] != '\0')
		{
			dst[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			dst[i++] = s2[j++];
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
