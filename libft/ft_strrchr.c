/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:36:01 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/06 17:36:04 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	char			*point;
	char			symbol;

	str = (char*)s;
	symbol = (char)c;
	point = str;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != *point && str[i] != symbol)
		i--;
	if (str[i] == symbol)
		return (&str[i]);
	return (NULL);
}
