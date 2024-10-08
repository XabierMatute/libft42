/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:43:39 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 23:05:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int ft_printf(const char *format, ...);
int ft_dprintf(int fd, const char *format, ...);
int ft_eprintf(const char *format, ...);

#endif //FT_PRINTF_H