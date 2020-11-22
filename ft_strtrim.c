/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:14:40 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/22 13:10:20 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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
	int		start;
	int		end;
	int		i;
	int		cpy_len;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_char_in_set(s1[start], set))
		start++;
	while (ft_char_in_set(s1[end], set))
		end--;
	if (end < 0)
		cpy_len = 1;
	else
		cpy_len = ((end - start) + 1);
	if (!(s1_cpy = (char *)malloc(sizeof(char) * cpy_len)))
		return (NULL);
	i = 0;
	while (i < cpy_len)
		s1_cpy[i++] = s1[start++];
	s1_cpy[i] = 0;
	return (s1_cpy);
}
