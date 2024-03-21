/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:28:55 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/21 16:05:33 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ishex_recursive(unsigned long long hex, int num, char *hex_chars,
		char uc)
{
	int	remainder;

	if (hex == 0)
	{
		return (uc);
	}
	remainder = hex % 16;
	uc = ft_ishex_recursive(hex / 16, num, hex_chars, uc);
	if (num == 0)
	{
		ft_putchar(hex_chars[remainder]);
	}
	else
	{
		ft_putchar(hex_chars[remainder]);
	}
	return (uc + 1);
}

int	ft_ishex(unsigned long long hex, int num, char uc)
{
	const char	*lowerhex;
	const char	*upperhex;
	const char	*hex_chars;

	lowerhex = "0123456789abcdef";
	upperhex = "0123456789ABCDEF";
	if (num == 0)
	{
		hex_chars = (char *)lowerhex;
	}
	else
	{
		hex_chars = (char *)upperhex;
	}
	if (hex == 0)
	{
		ft_putchar('0');
		return (1);
	}
	return (ft_ishex_recursive(hex, num, (char *)hex_chars, uc));
}
