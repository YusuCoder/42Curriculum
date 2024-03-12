/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:28:18 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/08 20:02:58 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t dstsize)
{
	size_t	a;
	size_t	dlen;

	if (dstsize <= ft_strlen(to))
	{
		return (dstsize + ft_strlen(from));
	}
	a = ft_strlen(to);
	dlen = 0;
	while (from[dlen] != '\0' && a + 1 < dstsize)
	{
		to[a] = from[dlen];
		a++;
		dlen++;
	}
	to[a] = '\0';
	return (ft_strlen(to) + ft_strlen(&from[dlen]));
}
