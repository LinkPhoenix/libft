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

static int	ft_len_max(size_t start, size_t len)
{
	if (start > len)
		return (len);
	return (start);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	end;

	i = 0;
	if (!s)
		return (NULL);
	end = ft_len_max(ft_strlen(&s[start]), len);
	if (!(tab = (char *)malloc(sizeof(*s) * len + 1)))
		return (NULL);
	tab[i] = '\0';
	if (start >= end)
		return (tab);
	while (s[start] && len-- > 0)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
