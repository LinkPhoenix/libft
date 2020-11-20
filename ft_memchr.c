/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:19:32 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/21 00:08:28 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*s_cpy;
	unsigned char	c_cpy;
	size_t			i;

	s_cpy = (const char *)s;
	c_cpy = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_cpy[i] == (const char)c_cpy)
			return ((void *)s_cpy + i);
		i++;
	}
	return (NULL);
}
