/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:23:54 by xmatute-          #+#    #+#             */
/*   Updated: 2024/09/17 21:37:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
#define FT_PUT_H

int		ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putchar_err(char c);

int		ft_putstr(char *s);
int		ft_putstr_fd(char *s, int fd);
int		ft_putstr_err(char *s);

int		ft_putendl(char *s);
int		ft_putendl_fd(char *s, int fd);
int		ft_putendl_err(char *s);

int		ft_putnbr_base(int n, char *base);
int		ft_putnbr_base_fd(int n, char *base, int fd);
int		ft_putnbr_base_err(int n, char *base);

int		ft_putunbr_base(unsigned int n, char *base);
int		ft_putunbr_base_fd(unsigned int n, char *base, int fd);
int		ft_putunbr_base_err(unsigned int n, char *base);

int		ft_putnbr(int n);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_err(int n);

int		ft_putunbr(unsigned int n);
int		ft_putunbr_fd(unsigned int i, int fd);
int		ft_putunbr_err(unsigned int n);

int		ft_putnbr(int n);
int		ft_putnbr_fd(int i, int fd);
int		ft_putnbr_err(int n);

int		ft_putunbr(unsigned int n);
int		ft_putunbr_fd(unsigned int i, int fd);
int		ft_putunbr_err(unsigned int n);

int		ft_putptr(void *p);
int		ft_putuptr_fd(void *p, int fd);
int		ft_putuptr_err(void *p);

int	    ft_putva(va_list va, char flag);
int	    ft_putva_fd(va_list va, char flag, int fd);
int	    ft_putva_err(va_list va, char flag);

#endif //FT_PUT_H
