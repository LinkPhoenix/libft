/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:50:24 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/21 01:23:48 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s1_cpy;
	unsigned const char	*s2_cpy;

	s1_cpy = (unsigned const char *)s1;
	s2_cpy = (unsigned const char *)s2;
	while ((*s1_cpy || *s2_cpy) && n > 0)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		s1_cpy++;
		s2_cpy++;
		n--;
	}
	return (0);
}
