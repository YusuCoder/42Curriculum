/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:54:50 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/12 16:13:35 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*to_ascii(int a, int dig, int negative)
{
	char	*result;

	result = (char *)malloc((dig + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[dig] = '\0';
	while (dig > 0)
	{
		dig--;
		result[dig] = (a % 10) + '0';
		a /= 10;
	}
	if (negative)
	{
		result[0] = '-';
	}
	return (result);
}

static char	*check_min(int n)
{
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		is_negative;
	char	*result;

	result = check_min(n);
	if (result != NULL)
	{
		return (result);
	}
	digits = num_digits(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		digits++;
		n = -n;
	}
	return (to_ascii(n, digits, is_negative));
}
