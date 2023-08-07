/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:13:00 by zbasol            #+#    #+#             */
/*   Updated: 2023/08/07 14:13:02 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_addr(unsigned long long n)
{
	int	len;
	len = 0;
	len += write(1, "0x", 2);
	len += ft_print_hex(n, 'x');
	return (len);
}
