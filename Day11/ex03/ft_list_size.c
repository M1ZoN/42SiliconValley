/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 09:44:02 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 09:44:05 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*traverse_ptr;
	int		len;

	traverse_ptr = begin_list;
	len = 0;
	while (traverse_ptr)
	{
		len++;
		traverse_ptr = traverse_ptr->next;
	}
	return (len);
}
