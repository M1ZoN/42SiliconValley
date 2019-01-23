/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:48:33 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/12 20:59:59 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int	sq;

	i = 1;
	sq = 1;
	while (sq < nb)
	{
		i++;
		sq = i * i;
	}
	if (sq > nb)
	{
		i = 0;
	}
	return (i);
}
