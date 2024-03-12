/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:07:34 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/11 11:31:22 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beginn;
	size_t	end;
	char	*trimm_str;

	beginn = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[beginn] && ft_strchr(set, s1[beginn]))
	{
		beginn++;
	}
	while (end > beginn && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	trimm_str = (char *)malloc(end - beginn + 1);
	if (!trimm_str)
		return (NULL);
	ft_strlcpy(trimm_str, s1 + beginn, end - beginn + 1);
	return (trimm_str);
}
