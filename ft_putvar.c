#include "libft.h"

int	ft_putvar(va_list va, char flag)
{
	if (c == 'c')
		return (ft_putchar(va_arg(va, int)));
	if (c == 's')
		return (ft_putstr(va_arg(va, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(va, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(va, int)));
	if (c == 'u')
		return (case_u(va_arg(va, unsigned int)));
	if (c == 'x')
		return (case_x(va_arg(va, unsigned int)));
	if (c == 'X')
		return (case_xl(va_arg(va, int)));
	if (c == '%')
		return (case_c('%'));
}
