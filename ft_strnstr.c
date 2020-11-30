/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:43:40 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/21 02:20:46 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;
			while ((haystack[k + j] && (j + k) < len))
			{
				if (needle[j] != haystack[k + j])
					break ;
				if (needle[j + 1] == '\0')
					return ((char *)(&haystack[k]));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
