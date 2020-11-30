/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:39:23 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/30 14:57:57 by emlecerf         ###   ########.fr       */
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

static void	*free_result(char **result, int k)
{
	while (k >= 0)
	{
		free(result[k]);
		k--;
	}
	free(result);
	return (NULL);
}

static void	*make_result(char const *s, char **result, int words, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = -1;
	while (++k < words)
	{
		while (issep(s[i], c))
			i++;
		j = i;
		while ((!(issep(s[j], c))) && s[j])
			j++;
		if (!(result[k] = ft_substr(s, i, j - i)))
			return (free_result(result, k));
		i = j;
	}
	result[k] = 0;
	return (result);
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	if (!(make_result(s, result, words, c)))
		return (NULL);
	return (result);
}
