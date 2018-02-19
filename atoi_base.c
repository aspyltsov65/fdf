/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 14:27:26 by apyltsov          #+#    #+#             */
/*   Updated: 2018/02/02 14:27:28 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

unsigned int	atoi_base(char *str)
{
	int				i;
	int				j;
	unsigned int	num;
	char			*arr;

	i = -1;
	num = 0;
	j = -1;
	arr = (char *)ft_memalloc(sizeof(char) * 17);
	while (++i < 16)
		if (i < 10)
			arr[i] = i + '0';
		else
			arr[i] = i + 55;
	i = -1;
	while (str[++i] != ' ' && str[i] != '\0')
		while (arr[++j] != '\0')
			if (ft_toupper(str[i]) == arr[j])
			{
				num = num * 16 + j;
				j = -1;
				break ;
			}
	ft_strdel(&arr); 
	return (num);
}
