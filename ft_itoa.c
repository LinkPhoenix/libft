/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 02:51:15 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/27 14:49:38 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	number;

	number = n;
	len = int_len(number);
	if (len == 0)
		len = 1;
	if (!(result = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (number < 0)
	{
		result[0] = '-';
		number = number * -1;
	}
	while (--len >= 0 && result[len] != '-')
	{
		result[len] = ((number % 10) + 48);
		number = number / 10;
	}
	len = (ft_strlen(result));
	result[len] = '\0';
	return (result);
}
