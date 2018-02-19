/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:48:09 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/25 13:48:12 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*src;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	src = (char*)s;
	if (src[i] != c)
	{
		j++;
		i++;
	}
	while (src[i] != '\0')
	{
		if (src[i] != c && src[i - 1] == c)
			j++;
		i++;
	}
	return (j);
}
