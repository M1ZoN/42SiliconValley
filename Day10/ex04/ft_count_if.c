/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 23:51:45 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/22 12:17:10 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		result;
	int		i;
	int		count;

	i = 0;
	result = 0;
	count = 0;
	while (tab[i])
	{
		result = f(tab[i]);
		if (result == 1)
			count++;
		i++;
	}
	return (count);
}
