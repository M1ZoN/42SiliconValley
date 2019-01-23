/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 23:02:55 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/15 00:39:47 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest2;

	dest2 = dest;
	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest2);
}
