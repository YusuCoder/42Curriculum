/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:25:11 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/11 15:22:57 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	size_t	s1_len;
	char	*s2;
	size_t	i;
	size_t	a;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	if (start >= s1_len)
		return (ft_strdup(""));
	if (len > s1_len - start)
		len = s1_len - start;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	a = start;
	while (i < len)
	{
		s2[i] = s1[a];
		i++;
		a++;
	}
	s2[i] = '\0';
	return (s2);
}
