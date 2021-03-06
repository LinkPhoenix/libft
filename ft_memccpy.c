/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 21:02:48 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/20 23:47:26 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest_cpy;
	unsigned const char	*src_cpy;
	size_t				i;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		if ((src_cpy[i] == (unsigned char)c))
			return (&dest_cpy[i + 1]);
		i++;
	}
	return (NULL);
}
