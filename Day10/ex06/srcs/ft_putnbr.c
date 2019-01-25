/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 17:59:55 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/22 18:01:33 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	num;

	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nbr * -1);
	}
	else if (nbr < 10)
	{
		num = nbr + '0';
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		num = nbr % 10 + '0';
		write(1, &num, 1);
	}
}
