/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:13:06 by zbasol            #+#    #+#             */
/*   Updated: 2023/08/07 14:13:08 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(const char *s, va_list ap, int i)
{
	int	len;

	len = 0;
	if (s[i] == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (s[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (s[i] == 'd')
		len += ft_putnbr(va_arg(ap, int));
	else if (s[i] == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (s[i] == 'u')
		len += ft_putnbr_u(va_arg(ap, unsigned int));
	else if (s[i] == '%')
		len += ft_print_percent();
	else if (s[i] == 'x')
		len += ft_print_hex(va_arg(ap, unsigned int), 'x');
	else if (s[i] == 'X')
		len += ft_print_hex(va_arg(ap, unsigned int), 'X');
	else if (s[i] == 'p')
		len += ft_print_addr(va_arg(ap, unsigned long));
	return (len);
}
