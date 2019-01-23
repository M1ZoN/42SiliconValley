/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 02:07:04 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/15 02:14:48 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*traverse;

	traverse = str;
	while (*traverse)
	{
		if (*traverse >= 'a' && *traverse <= 'z')
			*traverse += ('A' - 'a');
		traverse++;
	}
	return (str);
}
