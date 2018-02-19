/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:01:53 by apyltsov          #+#    #+#             */
/*   Updated: 2017/11/14 10:54:22 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_malword(char *dst, char c)
{
	size_t	i;
	char	*word;

	if (!dst)
		return (NULL);
	i = 0;
	while (dst[i] != '\0' && dst[i] != c)
		i++;
	word = (char *)(malloc(sizeof(*word) * (i + 1)));
	if (!word)
		return (NULL);
	i = 0;
	while (dst[i] != '\0' && dst[i] != c)
	{
		word[i] = dst[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dst;
	char	*src;
	int		i;
	size_t	j;

	if (!s)
		return (NULL);
	j = ft_count_words(s, c);
	src = (char*)s;
	dst = (char **)(malloc(sizeof(*dst) * (j + 1)));
	j = 0;
	if (!dst)
	{
		ft_freedom(dst, j);
		return (NULL);
	}
	i = -1;
	if (src[++i] != c && src[i] != '\0')
		dst[j++] = ft_malword(src, c);
	i--;
	while (src[++i] != '\0')
		if (src[i] != c && src[i - 1] == c)
			dst[j++] = ft_malword(&src[i], c);
	dst[j] = NULL;
	return (dst);
}
