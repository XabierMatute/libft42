/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:21:02 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/01 20:46:59 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	return (
	ft_putstr_fd(s, fd) +
	ft_putchar_fd('\n', fd));
}

int	ft_putendl_err(char *s)
{
	return (
	ft_putstr_err(s) +
	ft_putchar_err('\n'));
}

int	ft_putendl(char *s)
{
	return (
	ft_putstr(s) +
	ft_putchar('\n'));
}