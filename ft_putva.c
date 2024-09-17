/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putva.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:51:52 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 21:57:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putva(va_list va, char flag)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(va, int)));
	if (flag == 's')
		return (ft_putstr(va_arg(va, char *)));
	if (flag == 'p')
		return (ft_putptr(va_arg(va, void *)));
	if (flag == 'd' || flag == 'i')
		return (ft_putnbr(va_arg(va, int)));
	if (flag == 'u')
		return (ft_putunbr(va_arg(va, unsigned int)));
	if (flag == 'x')
		return (ft_putunbr_base(va_arg(va, unsigned int), "0123456789abcdef"));
	if (flag == 'X')
		return (ft_putunbr_base(va_arg(va, unsigned int), "0123456789ABCDEF"));
	return (ft_putchar('%'));
}
