/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 00:40:28 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/15 01:48:38 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*found;
	char	*temp;

	while (*str)
	{
		found = str;
		temp = to_find;
		while (*str && *temp && *str == *temp)
		{
			str++;
			temp++;
		}
		if (!*temp)
			return (found);
		str = found + 1;
	}
	return (NULL);
}
