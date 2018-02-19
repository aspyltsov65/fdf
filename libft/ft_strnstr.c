/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:51:26 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/06 19:51:29 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t l1;
	size_t l2;

	l1 = 0;
	if (find[0] == 0)
		return ((char *)str);
	while (str[l1] != '\0' && l1 < len - ft_strlen((char *)find) + 1)
	{
		if (ft_strlen((char *)find) > len)
			return (NULL);
		l2 = 0;
		while (str[l1] == find[l2])
		{
			if (find[l2 + 1] == '\0')
			{
				return (&(*(char *)(str + l1 - l2)));
			}
			l1++;
			l2++;
		}
		l1 = l1 - l2;
		l1++;
	}
	return (0);
}
