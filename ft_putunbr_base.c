/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:27:38 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 21:37:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_base_fd(unsigned int n, char *base, int fd)
{
	if (n / ft_strlen(base) == 0)
		return (ft_putchar_fd(base[n], fd));
	else
	{
		return (
		ft_putunbr_base_fd(n / ft_strlen(base), base, fd) +
		ft_putunbr_base_fd(n % ft_strlen(base), base, fd));
	}
}

int	ft_putunbr_base(unsigned int n, char *base)
{
    return (ft_putunbr_base_fd(n, base, 1));
}

int ft_putunbr_base_err(unsigned int n, char *base)
{
    return (ft_putunbr_base_fd(n, base, 2));
}
