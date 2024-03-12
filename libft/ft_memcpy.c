/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:26:02 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/08 20:00:39 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	size_t		i;
	char		*t;
	const char	*f;

	i = 0;
	t = (char *)to;
	f = (char *)from;
	while (i < n && (from || to))
	{
		t[i] = f[i];
		i++;
	}
	return (t);
}
