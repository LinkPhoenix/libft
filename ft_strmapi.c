/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:51:12 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 16:43:28 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s_cpy;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(s_cpy = ft_strdup(s)))
		return (NULL);
	while (s[i])
	{
		s_cpy[i] = f(i, s[i]);
		i++;
	}
	s_cpy[i] = 0;
	return (s_cpy);
}
