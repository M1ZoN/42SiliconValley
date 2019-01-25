/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:24:02 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 16:24:04 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define NULL 0

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*traverse_ptr;
	t_list	*next_ptr;
	t_list	*prev_ptr;

	traverse_ptr = *begin_list;
	prev_ptr = NULL;
	next_ptr = NULL;
	while (traverse_ptr)
	{
		next_ptr = traverse_ptr->next;
		traverse_ptr->next = prev_ptr;
		prev_ptr = traverse_ptr;
		traverse_ptr = next_ptr;
	}
	*begin_list = prev_ptr;
}
