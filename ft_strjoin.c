/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:55:31 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/21 16:11:31 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		tab_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(tab = (char *)malloc(sizeof(char) * tab_len)))
		return (NULL);
	while (s1[j])
		tab[i++] = s1[j++];
	j = 0;
	while (s2[j])
		tab[i++] = s2[j++];
	tab[i] = 0;
	return (tab);
}
