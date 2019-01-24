/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 22:40:22 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/17 23:17:38 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count(char *str, int iter)
{
	int word_count;

	word_count = 0;
	while (str[iter])
	{
		if (str[iter] == '\t' || str[iter] == ' ' || str[iter] == '\n')
			word_count++;
		iter++;
	}
	return (word_count);
}

int		get_size(char *str, int iter)
{
	int		size;

	size = 0;
	while (str[iter])
	{
		if (str[iter] == '\t' || str[iter] == ' ' || str[iter] == '\n')
			break ;
		size++;
		iter++;
	}
	return (size);
}

void	loop(char *str, char **result, int *iter, int *j)
{
	char	*line;
	int		size;

	size = get_size(str, *iter);
	line = (char*)malloc(size + 1);
	size = 0;
	while (str[*iter] != '\0' && str[*iter] != '\t'
			&& str[*iter] != ' ' && str[*iter] != '\n')
		line[size++] = str[(*iter)++];
	line[size] = '\0';
	result[*j] = line;
	(*j)++;
	(*iter)++;
}

char	**ft_split_whitespaces(char *str)
{
	int		iter;
	int		word_count;
	char	**result;
	int		j;

	iter = 0;
	word_count = count(str, iter);
	if (word_count >= 1)
		word_count++;
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	iter = 0;
	j = 0;
	while (word_count-- > 0)
	{
		loop(str, result, &iter, &j);
	}
	result[j] = 0;
	return (result);
}
