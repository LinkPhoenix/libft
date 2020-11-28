/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:04:49 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 09:32:23 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*new_list;
	void	*tmp;

	if (!f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (!(tmp = f(lst->content)))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!(new_element = ft_lstnew(tmp)))
		{
			ft_lstclear(&new_list, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
