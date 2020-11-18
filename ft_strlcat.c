/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:01:36 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 10:20:27 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(dst[i] && i < size)
		i++;
	while(src[j] && (i + j) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("I need 3 arguments\n");
		return (0);
	}

	char *argv1_bis;
	argv1_bis = strdup(argv[1]);
	char *argv2_bis;
	argv2_bis = strdup(argv[2]);
	char *argv3_bis;
	argv3_bis = strdup(argv[3]);
	printf("\033[0;31mTHE REAL ONE STRLCAT\033[0m\n");
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv[1], argv[2], argv[3]);
	printf("\033[0;32mstrlcat\033[0m = %zu\n", strlcat(argv[1], argv[2], atoi(argv[3])));
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv[1], argv[2], argv[3]);
	printf("#############\n");
	printf("\033[0;31mMY STRLCAT\033[0m\n");
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv1_bis, argv2_bis, argv3_bis);
	printf("\033[0;32mft_strlcat\033[0m = %zu\n", ft_strlcat(argv1_bis, argv2_bis, atoi(argv3_bis)));
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv1_bis, argv2_bis, argv3_bis);
	return (0);
}
