/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:55:39 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 20:00:23 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cpy_s;
	size_t	i;

	cpy_s = s;
	i = 0;
	while (i < n)
	{
		cpy_s[i] = c;
		i++;
	}
	return (s);
}
