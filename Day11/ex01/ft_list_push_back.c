/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:45:47 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/22 23:08:32 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*traverse_ptr;
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (*begin_list)
	{
		traverse_ptr = *begin_list;
		while (traverse_ptr->next)
			traverse_ptr = traverse_ptr->next;
		traverse_ptr->next = new_node;
	}
	else
	{
		*begin_list = new_node;
	}
}
