/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:40:08 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 19:40:10 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*traverse_ptr;

	traverse_ptr = begin_list;
	while (traverse_ptr)
	{
		if (cmp(traverse_ptr->data, data_ref) == 0)
			f(traverse_ptr->data);
		traverse_ptr = traverse_ptr->next;
	}
}
