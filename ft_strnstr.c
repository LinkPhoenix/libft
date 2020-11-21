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

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		while ((needle[j] && (needle[j] == haystack[i] && (i < len))))
		{
			if (needle[j + 1] == '\0')
				return ((char *)(&haystack[i - j]));
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
