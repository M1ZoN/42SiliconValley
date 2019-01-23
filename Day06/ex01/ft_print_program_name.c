/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 00:41:30 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/16 20:37:51 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*pr_name;

	if (argc >= 0)
	{
		pr_name = argv[0];
		while (*pr_name)
		{
			ft_putchar(*pr_name);
			pr_name++;
		}
		ft_putchar('\n');
	}
	return (0);
}
