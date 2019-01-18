/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:21:05 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/11 23:22:02 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		counter;
	int		size;
	int		*anotherPtr;
	char	temp;

	counter = 0;
	size = 0;
	anotherPtr = str;
	while (*anotherPtr)
	{
		size++;
		anotherPtr++;
	}
	while (counter < size)
	{
		temp = str[counter];
		str[counter] = str[size];
		str[size] = temp;
		counter++;
		size--;	
	}
	
	return (str);
}
