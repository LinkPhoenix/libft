/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:17:35 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/25 17:59:53 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	if (!(new_element = malloc(sizeof(t_list))))
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
