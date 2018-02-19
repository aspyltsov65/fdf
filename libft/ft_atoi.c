/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:38:00 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/25 16:27:27 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int			ft_ispaces(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == '\f'
		|| c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int					i;
	unsigned long long	num;
	int					flag;

	i = 0;
	num = 0;
	while (ft_ispaces(str[i]))
		i++;
	flag = ((str[i] == '-') ? -1 : 1);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] == 48)
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		num = num * 10 + (str[i] - 48);
		if (i > 19 || num > 9223372036854775807)
			return ((flag == -1) ? 0 : -1);
		i++;
	}
	return ((int)num * flag);
}
