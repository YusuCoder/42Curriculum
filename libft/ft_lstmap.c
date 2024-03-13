/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:32:09 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/13 15:37:40 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*i;
	t_list	*n;

	i = (void *)0;
	while (lst)
	{
		n = ft_lstnew(f(lst->content));
		if (!n)
		{
			ft_lstclear(&i, del);
		}
		ft_lstadd_back(&i, n);
		lst = lst->next;
	}
	return (i);
}
