/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:12:16 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/11 15:12:19 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char*)(malloc(size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (size > 0)
	{
		str[i] = '\0';
		i++;
		size--;
	}
	str[i] = '\0';
	return ((char*)str);
}
