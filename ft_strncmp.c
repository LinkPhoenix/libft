/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:27:57 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/21 22:52:51 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*s1_cpy;
	unsigned const char *s2_cpy;
	size_t				i;

	s1_cpy = (unsigned const char *)s1;
	s2_cpy = (unsigned const char *)s2;
	i = 0;
	while ((s1_cpy[i] || s2_cpy[i]) && i < n)
	{
		if (s1_cpy[i] != s2_cpy[i])
			return ((int)(s1_cpy[i] - s2_cpy[i]));
		i++;
	}
	return (0);
}
