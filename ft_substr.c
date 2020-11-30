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
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	end = ft_len_max(ft_strlen(&s[start]), len);
	if (!(tab = malloc(sizeof(char) * (end + 1))))
		return (NULL);
	while (s[start] && i < end)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
