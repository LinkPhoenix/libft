/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:39:23 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 12:13:28 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	issep(char const s, char sep)
{
	if (s == sep)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int i;
	int count;
	int check;

	i = -1;
	count = 0;
	check = 1;
	while (s[++i])
	{
		if (issep(s[i], c))
			check++;
		else if (check)
		{
			count++;
			check = 0;
		}
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;
	int		words;

	i = 0;
	k = -1;
	words = count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	while (++k < words)
	{
		while (issep(s[i], c))
			i++;
		j = i;
		while (!(issep(s[j], c)))
			j++;
		result[k] = ft_substr(s, i, j - i);
		i = j;
	}
	return (result);
}
