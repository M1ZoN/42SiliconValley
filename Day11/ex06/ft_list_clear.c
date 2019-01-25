/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:42:16 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 15:42:18 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*traverse_ptr;
	t_list	*next;

	traverse_ptr = *begin_list;
	next = traverse_ptr->next;
	while (traverse_ptr->next)
	{
		free(traverse_ptr);
		traverse_ptr = next;
		next = traverse_ptr->next;
	}
	*begin_list = NULL;
}
