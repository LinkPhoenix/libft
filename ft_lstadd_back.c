/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:22:14 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/25 20:23:57 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (new == NULL)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	else
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
}
