/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:01:36 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 17:46:42 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strlcat.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (i + j);
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			dst[i + j] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (i + j);
}
