/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:10:05 by zbasol            #+#    #+#             */
/*   Updated: 2023/08/07 15:08:41 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;
    long a;

    a = n;
	len = 0;
	if (a < 0)
	{
		len += ft_putchar('-');
		a = -a;
	}
	if (a > 9)
		len += ft_putnbr(a / 10);
	len += ft_putchar(a % 10 + 48);
	return (len);
}