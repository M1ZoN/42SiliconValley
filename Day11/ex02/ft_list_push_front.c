/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 09:37:40 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 09:42:46 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*traverse_ptr;
	t_list	*new_node;

	new_node = ft_create_elem(data);
	traverse_ptr = *begin_list;
	*begin_list = new_node;
	new_node->next = traverse_ptr;
}
