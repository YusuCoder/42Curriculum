/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:45:19 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/08 16:59:54 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int i, size_t len)
{
	size_t	a;

	a = 0;
	while (a < len)
	{
		((unsigned char *)p)[a] = i;
		a++;
	}
	return (p);
}
