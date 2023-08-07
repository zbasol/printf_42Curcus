/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:11:04 by zbasol            #+#    #+#             */
/*   Updated: 2023/08/07 14:14:42 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr_u(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}