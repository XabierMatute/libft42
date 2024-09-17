/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:45:01 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 21:51:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_putptr_fd(void *ptr, int fd)
{
    return (
        ft_putstr_fd("0x", fd) +
        ft_putunbr_base_fd((unsigned long long)ptr, "0123456789abcdef", fd));
}

int    ft_putptr(void *ptr)
{
    return (ft_putptr_fd(ptr, 1));
}

int    ft_putptr_err(void *ptr)
{
    return (ft_putptr_fd(ptr, 2));
}