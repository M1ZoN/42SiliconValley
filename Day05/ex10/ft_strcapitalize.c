/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mislamov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 02:18:59 by mislamov          #+#    #+#             */
/*   Updated: 2019/01/15 13:41:47 by mislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alnum(char c)
{
	return ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z') ||
			(c <= '9' && c >= '0'));
}

char	*ft_strcapitalize(char *str)
{
	char	*traverse;

	traverse = str;
	while (*traverse)
	{
		if ((!is_alnum(*traverse) && is_alnum(*(traverse + 1)))
				|| traverse == str)
		{
			if (traverse == str)
				*(traverse) += 'A' - 'a';
			else if (*(traverse + 1) >= 'a' && *(traverse + 1) <= 'z')
				*(traverse + 1) += 'A' - 'a';
		}
		else if (is_alnum(*traverse) && is_alnum(*(traverse - 1)))
		{
			if (*traverse >= 'A' && *traverse <= 'Z')
				*traverse -= 'A' - 'a';
		}
		traverse++;
	}
	return (str);
}
