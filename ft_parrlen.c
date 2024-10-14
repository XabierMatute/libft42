/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:02:17 by xmatute-          #+#    #+#             */
/*   Updated: 2024/10/14 15:04:06 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_parrlen(void **parr)
{
    size_t	l;

	l = 0;
	while (parr[l])
		l++;
	return (l);
}