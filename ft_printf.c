/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:52:04 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 21:57:19 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//could be safer (write error is not check)

int	ft_printf(char const *s, ...)
{
	int	printed_chars;
	va_list	va;

	printed_chars = 0;
	va_start(va, s);
	while(*s)
	{
		if (*s == '%')	
			printed_chars += ft_putva(va, *(++s));
		else
			printed_chars += ft_putchar(*s);
		s++;
	}
	va_end(va);
	return(printed_chars);
}
