/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:51:07 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/10 13:11:17 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hydr, const char *needle, size_t n)
{
	size_t	slen;
	size_t	i;
	size_t	a;

	i = 0;
	slen = ft_strlen(needle);
	if (hydr == needle || slen == 0)
		return ((char *)hydr);
	while (hydr[i] != '\0' && i < n)
	{
		a = 0;
		while (hydr[i + a] != '\0' && needle[a] != '\0'
			&& (i + a) < n && hydr[i + a] == needle[a])
		{
			a++;
			if (a == slen)
				return ((char *)(hydr + i));
		}
		i++;
	}
	return (0);
}
