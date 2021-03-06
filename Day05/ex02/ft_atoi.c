/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 11:31:45 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/14 21:41:00 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		a;
	int		neg;

	a = 0;
	neg = 1;
	while (*str)
	{
		if (*str == '-')
		{
			neg = -1;
			str++;
		}
		if (*str == '\n' || *str == '\t' || *str == '\f' || *str == '\v'
				|| *str == '\r' || *str == ' ' || *str == '+')
		{
			str++;
			continue ;
		}
		if (*str <= '9' && *str >= '0')
			a = a * 10 + (*str - '0');
		else
			break ;
		str++;
	}
	return (a * neg);
}
