/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:24:46 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 21:52:41 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		return (
		ft_putchar_fd('-', fd) +
		ft_putunbr_fd(-1 * n, fd));	
	else
		return (ft_putunbr_fd(n, fd));
}

int ft_putnbr(int n)
{
	return (ft_putnbr_fd(n, 1));
}

int ft_putnbr_err(int n)
{
	return (ft_putnbr_fd(n, 2));
}