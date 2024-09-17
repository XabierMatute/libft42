/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:52:51 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 22:08:11 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_fd(unsigned long long n, int fd)
{
	if (n / 10 == 0)
		return (ft_putchar_fd('0' + n, fd));
	else
	{
		return (
		ft_putunbr_fd(n / 10, fd) +
		ft_putunbr_fd(n % 10, fd));
	}
}

int	ft_putunbr(unsigned long long n)
{
	return (ft_putunbr_fd(n, 1));
}

int	ft_putunbr_err(unsigned long long n)
{
	return (ft_putunbr_fd(n, 2));
}