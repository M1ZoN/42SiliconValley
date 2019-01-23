/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 02:15:31 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/15 02:18:27 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*traverse;

	traverse = str;
	while (*traverse)
	{
		if (*traverse >= 'A' && *traverse <= 'Z')
			*traverse -= 'A' - 'a';
		traverse++;
	}
	return (str);
}
