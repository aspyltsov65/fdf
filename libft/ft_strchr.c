/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:48:07 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/06 13:48:13 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			symbol;
	char			*str;

	i = 0;
	symbol = (char)c;
	str = (char *)s;
	while (str[i] != symbol && str[i] != '\0')
		i++;
	if (str[i] == symbol)
		return (&str[i]);
	return (NULL);
}
