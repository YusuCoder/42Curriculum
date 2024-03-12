/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:53 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/12 15:58:21 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = (unsigned int)(num * -1);
	}
	else
	{
		num = (unsigned int)n;
		if (num >= 10)
		{
			ft_putnbr_fd(num / 10, fd);
		}
		ft_putchar_fd((char)(num % 10 + 48), fd);
	}
}
