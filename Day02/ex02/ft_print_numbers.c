/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:59:01 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/10 16:50:25 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	c = '0';
	i = 0;
	while (i < 10)
	{
		ft_putchar(c + i);
		i = i + 1;
	}
}
