/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:55:03 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/13 14:09:45 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*n;

	if (!*lst)
	{
		return ;
	}
	i = *lst;
	while (i)
	{
		n = i->next;
		ft_lstdelone(i, del);
		i = n;
	}
	*lst = NULL;
}
