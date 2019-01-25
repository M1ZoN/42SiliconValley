/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 13:34:22 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/23 13:34:25 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*traverse_ptr;
	int		i;

	if (ac == 0)
		return (NULL);
	i = 0;
	traverse_ptr = NULL;
	while (i < ac)
	{
		head = ft_create_elem(av[i]);
		head->next = traverse_ptr;
		traverse_ptr = head;
		i++;
	}
	return (head);
}
