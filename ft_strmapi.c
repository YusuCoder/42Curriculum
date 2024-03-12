/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:23:29 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/12 14:35:24 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = ft_strdup(s1);
	if (!s1 || !f || !s2)
	{
		return (NULL);
	}
	while (s2[i])
	{
		s2[i] = f(i, s2[i]);
		i++;
	}
	return (s2);
}
