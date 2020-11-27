/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:50:55 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 17:28:36 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	end;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	if (!(tab = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	tab[i] = '\0';
	if (start >= end)
		return (tab);
	while (len-- > 0)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
