/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:48:03 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/22 20:36:55 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);

int		ft_strlen(char *str);

void	ft_putnbr(int nbr);

int		doop(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '*')
		return (a * b);
	if (c == '/')
		return (a / b);
	if (c == '%')
		return (a % b);
	return (0);
}

void	check_if(char oper)
{
	if (oper == '/')
		write(1, "Stop : division by zero\n", 24);
	else
		write(1, "Stop : modulo by zero\n", 22);
}

int		main(int argc, char **argv)
{
	char	oper;
	int		result;

	if (argc == 4)
	{
		if (ft_strlen(argv[2]) > 1)
		{
			write(1, "0\n", 2);
			return (0);
		}
		oper = *argv[2];
		if ((oper == '/' || oper == '%') && ft_atoi(argv[3]) == 0)
		{
			check_if(oper);
			return (0);
		}
		result = doop(ft_atoi(argv[1]), ft_atoi(argv[3]), oper);
		ft_putnbr(result);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
