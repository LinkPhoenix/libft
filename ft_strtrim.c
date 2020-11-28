/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:14:40 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 17:22:53 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_cpy;
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	while (ft_char_in_set(*s1, set))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_char_in_set(s1[len - 1], set))
		len--;
	if (!(s1_cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		s1_cpy[i] = s1[i];
	s1_cpy[i] = 0;
	return (s1_cpy);
}
