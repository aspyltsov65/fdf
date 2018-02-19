/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:33:04 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/11 13:33:07 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*dst;

	dst = (unsigned char*)malloc(size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, size);
	return (dst);
}
