/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:25:53 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/21 15:57:49 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adress(long *p)
{
	size_t	i;
	int		a;

	i = (size_t)p;
	ft_putstr("0x");
	a = 2;
	a += ft_ishex(i, 0, 0);
	return (a);
}
