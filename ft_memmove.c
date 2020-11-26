/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:44:39 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/26 02:43:15 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_cpy;
	const char	*src_cpy;

	dst_cpy = (char *)dst;
	src_cpy = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst_cpy > src_cpy)
	{
		while (len-- > 0)
			dst_cpy[len] = src_cpy[len];
	}
	else
	{
		while (len-- > 0)
			*dst_cpy++ = *src_cpy++;
	}
	return (dst);
}
