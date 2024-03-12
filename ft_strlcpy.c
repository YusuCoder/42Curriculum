/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:13:14 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/09 12:08:40 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t dstsize)
{
	size_t	s;

	s = 0;
	while (from[s] != '\0')
	{
		s++;
	}
	while (dstsize--)
	{
		if (dstsize == 0 || *from == '\0')
		{
			*to = '\0';
			break ;
		}
		*to = *from;
		to++;
		from++;
	}
	return (s);
}
