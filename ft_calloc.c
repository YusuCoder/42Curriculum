/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:16:37 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/10 16:54:27 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	all_size;
	void	*dest;

	all_size = count * size;
	dest = malloc(all_size);
	if (dest == 0)
	{
		return (NULL);
	}
	ft_memset(dest, 0, all_size);
	return (dest);
}
