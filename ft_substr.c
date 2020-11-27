/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:50:55 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 12:45:57 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(s);
	if (!s)
		return (NULL);
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
