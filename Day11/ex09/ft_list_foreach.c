/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:52:26 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 16:52:45 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*traverse_ptr;

	if (!begin_list)
		return ;
	traverse_ptr = begin_list;
	while (traverse_ptr)
	{
		f(traverse_ptr->data);
		traverse_ptr = traverse_ptr->next;
	}
}
