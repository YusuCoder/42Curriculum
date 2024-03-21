/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:44:53 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/20 12:46:27 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c, int res)
{
	if (c == -2147483648)
	{
		ft_putstr("-2147483648");
		res = 11;
	}
	else
	{
		if (c < 0)
		{
			ft_putchar('-');
			c *= -1;
			res++;
		}
		if (c > 9)
		{
			res += ft_putnbr(c / 10, 0);
		}
		ft_putchar(c % 10 + '0');
		res++;
	}
	return (res);
}
