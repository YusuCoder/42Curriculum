/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:59:34 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/13 20:23:34 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*---------------------DESCRIPTION------------------------*/
/*		1)	Initialize variables: i, sign, counter to 0.
		2)	Skip leading whitespace.
		3)	Handle sign: Track sign (positive or negative),
			allowing only one sign character.
		4)	Parse digits: Convert each digit character to integer, accumulate into i.
		5)	Return result: Final i multiplied by sign.
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	counter;

	i = 0;
	sign = 1;
	counter = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		counter++;
		if (counter > 1)
			return (0);
		str++;
	}
	while (ft_isdigit(*str))
	{
		i *= 10;
		i += *str - '0';
		str++;
	}
	return (i * sign);
}
