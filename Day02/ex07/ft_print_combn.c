/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 23:05:31 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/10 23:22:05 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	a;
	int	counter;
	int	i;

	a = 1;
	counter = 0;
	while (counter < n)
	{
		a *= 10;
		counter++;
	}
	i = 0;
	while (i < a)
	{

	}
}

int	main()
{
	ft_print_combn(2);
	return (0);
}
