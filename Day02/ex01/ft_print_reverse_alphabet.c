/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:48:40 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/10 16:48:33 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	c = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(c - i);
		i++;
	}
}
