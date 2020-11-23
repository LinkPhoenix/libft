/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 13:39:23 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/22 13:39:25 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_sep(char const *s, char sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == sep)
			count++;
		while(s[i] == sep && s[i + 1] == sep)
			i++;
		i++;
	}
	i = ft_strlen(s);
	while (s[i] == sep)
	{
		i--;
		count--;
	}
	return (count);
}

static int	len_word(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**s_return;
	int		count;
	int		lenstr;
	int		i;
	int		j;
	int		k;

	while (*s == c)
		++s;
	if (*s == '\0')
		return (NULL);
	count = count_sep(s, c);
	if (!(s_return = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (i <= count)
	{
		while (s[k] == c)
			k++;
		lenstr = len_word((char *)(s + k), c);
		if (!(s_return[i] = (char *)malloc(sizeof(char) * lenstr + 1)))
			return (NULL);
		j = 0;
		while (j < lenstr)
		{
			s_return[i][j] = s[k];
			j++;
			k++;
		}
		s_return[i][j] = '\0';
		i++;
	}
	return (s_return);
}

// int	main(int argc, char **argv)
// {
// 	if(argc)
// 	printf("############\n");
// 	char **result;
// 	int i;

// 	i = 0;
// 	result = ft_split(argv[1], *argv[2]);
// 	while (result[i])
// 	{
// 		printf("\"%s\"\n", result[i]);
// 		i++;
// 	}
// 	return(0);
// }

