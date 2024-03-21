/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:19:17 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/20 18:05:46 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	len;

	if (c)
	{
		len = (int)write(1, c, ft_strlen(c));
		if (len < 0)
			return (-1);
		else
			return (len);
	}
	else
	{
		len = (int)write(1, "(null)", 6);
		if (len < 0)
			return (-1);
		else
			return (len);
	}
}

// char	ft_putstr(char *c)
// {
// 	if (*c)
// 	{
// 		write(1, c, ft_strlen(c));
// 		return (ft_strlen(c));
// 	}
// 	else
// 	{
// 		write(1, "(NULL)", 6);
// 		return (6);
// 	}
// }
