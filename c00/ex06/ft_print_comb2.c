/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsocrepa <rsocrepa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:31:13 by rsocrepa          #+#    #+#             */
/*   Updated: 2021/04/11 22:47:19 by rsocrepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char m, char c, char d, char u)
{
	if (m < '9' && c < '9' && d < '9' && u < '9')
	{
		write(1, &m, 1);
		write(1, &c, 1);
		write(1, " ", 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (!(m == '9' && c == '9' && d == '9' && u == '9'))
		{
			write(1, ", ", 1);
		}
	}
}

void	ft_print_comb2(void)
{
	char u;
	char d;
	char c;
	char m;

	m = '0';
	while (m <= '9')
	{
		c = '0';
		while (c <= '9')
		{
			d = '0';
			while (d <= '9')
			{
				u = '0';
				while (u <= '9')
				{
					ft_print_numbers(m, c, d, u++);
				}
				d++;
			}
			c++;
		}
		m++;
	}
}
