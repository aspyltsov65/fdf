/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 18:11:34 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/04 18:11:37 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dst, const char *src)
{
	unsigned int	i;
	unsigned int	j;
	char			*d;
	char			*s;

	i = 0;
	j = 0;
	d = (char*)dst;
	s = (char*)src;
	while (d[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		d[i + j] = s[j];
		j++;
	}
	d[i + j] = '\0';
	return (dst);
}
