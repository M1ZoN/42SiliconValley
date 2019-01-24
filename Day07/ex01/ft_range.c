/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:58:34 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/17 15:47:50 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*arr;
	int		*ptr;

	size = max - min;
	if (min >= max)
		return (NULL);
	arr = malloc(size * 4);
	ptr = arr;
	while (min < max)
		*ptr++ = min++;
	return (arr);
}
