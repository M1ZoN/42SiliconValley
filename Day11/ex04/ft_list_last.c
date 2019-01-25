/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 09:51:24 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 09:51:26 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*traverse_ptr;

	traverse_ptr = begin_list;
	if (!begin_list)
		return (0);
	while (traverse_ptr->next)
		traverse_ptr = traverse_ptr->next;
	return (traverse_ptr);
}
