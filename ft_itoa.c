/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 02:51:15 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/24 04:22:38 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
	printf("len = %d\n", len);
	if (!(result = malloc(sizeof(char) * len + 1)))
		return (NULL);
	result[len] = 0;
	if (number < 0)
	{
		result[0] = '-';
		number = number * -1;
		len--;
	}
	while (len-- > 0)
	{
		result[len - 1] = ((number % 10) + 48);
		number = number / 10;
	}
	return (result);
}

#include <limits.h>

int      main(void)
{
  int d = INT_MIN;
  printf("%d =? %s\n", d, ft_itoa(d));

  d = -13;
  printf("%d =? %s\n", d, ft_itoa(d));

  d = 0;
  printf("%d =? %s\n", d, ft_itoa(d));

  d = 5;
  printf("%d =? %s\n", d, ft_itoa(d));

  d = INT_MAX;
  printf("%d =? %s\n", d, ft_itoa(d));
}
