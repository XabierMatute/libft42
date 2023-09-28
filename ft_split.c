/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:32:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/27 11:04:06 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_free2(void **ss)
{
	size_t	i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free(ss);
}

static size_t	wlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	palabras(char const *s, char c)
{
	size_t	p;

	p = 0;
	while (*s)
	{
		if (s[0] != c && (s[1] == c || s[1] == 0))
			p++;
		s++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	size_t	i;
	size_t	j;

	ss = malloc(sizeof(char *) * (palabras(s, c) + 1));
	if (!ss)
		return (NULL);
	i = 0;
	j = 0;
	while (i < palabras(s, c))
	{
		while (s[j] == c)
			j++;
		ss[i] = ft_substr(s, j, wlen(s + j, c));
		if (!ss[i])
			return (ft_free2((void **)ss), NULL);
		i++;
		j += wlen(s + j, c);
	}
	ss[i] = NULL;
	return (ss);
}
