/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:48:24 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/17 23:00:09 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int result;

	result = 0;
	while (str[result])
		result++;
	return (result);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		size;

	size = 0;
	i = 1;
	while (i < argc)
		size += ft_strlen(argv[i++]) + 1;
	str = (char*)malloc(size);
	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		str[k] = '\n';
		k++;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
