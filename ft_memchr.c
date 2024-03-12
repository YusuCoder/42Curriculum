/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:25:54 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/09 15:38:14 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int i, size_t n)
{
	size_t				a;
	const unsigned char	*s;
	unsigned char		z;

	a = 0;
	s = p;
	z = (unsigned char)i;
	while (a < n)
	{
		if (s[a] == z)
		{
			return ((void *)(s + a));
		}
		a++;
	}
	return (NULL);
}
