/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:59:09 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/12 15:59:16 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	if (!s)
		return (NULL);
	dst = (char*)(malloc(sizeof(*dst) * (len + 1)));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && len-- > 0)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
