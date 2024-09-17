/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:27:38 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 22:08:07 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(long long n, char *base, int fd)
{
    if (n < 0)
        return (
            ft_putchar_fd('-', fd) +
            ft_putunbr_base_fd(-1 * n, base, fd));
    else
        return (ft_putunbr_base_fd(n, base, fd));
}

int	ft_putnbr_base(long long n, char *base)
{
    return (ft_putnbr_base_fd(n, base, 1));
}

int ft_putnbr_base_err(long long n, char *base)
{
    return (ft_putnbr_base_fd(n, base, 2));
}
