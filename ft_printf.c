/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:30:21 by zbasol            #+#    #+#             */
/*   Updated: 2023/08/07 14:36:17 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%') 
			len += ft_formats(s, ap, ++i);
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
