/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:06:59 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/14 18:11:53 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*dst;
	long	i;
	long	num;
	int		j;

	i = 10;
	num = n;
	j = 1;
	if (n < 0 && j++)
		num = -num;
	while (num / i > 0 && ++j)
		i *= 10;
	dst = (char *)(malloc(sizeof(*dst) * (j + 1)));
	if (!dst)
		return (NULL);
	j = 0;
	if (n < 0)
		dst[j++] = '-';
	while ((i /= 10) > 0)
		dst[j++] = (num / i) % 10 + '0';
	dst[j] = '\0';
	return (dst);
}
