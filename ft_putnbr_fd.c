/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 23:07:29 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/30 15:30:58 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	nbr;
	long	i;
	char	nbr_char[11];

	nbr = nb;
	i = 10;
	nbr_char[10] = 48;
	if (nb == -2147483648)
	{
		nbr_char[i--] = '8';
		nb /= 10;
	}
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nbr_char[i--] = nb % 10 + 48;
		nb /= 10;
	}
	if (nbr < 0)
		nbr_char[i] = '-';
	else if (nbr != 0)
		i++;
	write(fd, &nbr_char[i], 11 - i);
}
