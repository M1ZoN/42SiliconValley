/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:58:46 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 15:58:49 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define NULL 0

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*traverse_ptr;
	unsigned int	i;

	i = 0;
	traverse_ptr = begin_list;
	while (traverse_ptr)
	{
		if (i == nbr)
			return (traverse_ptr);
		traverse_ptr = traverse_ptr->next;
		i++;
	}
	return (NULL);
}
