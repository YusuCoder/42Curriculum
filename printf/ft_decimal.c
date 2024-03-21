/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:51:35 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/21 12:19:39 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(size_t i, int res)
{
	if (i > 9)
	{
		res += ft_decimal(i / 10, res);
	}
	ft_putchar(i % 10 + '0');
	res++;
	return (res);
}
