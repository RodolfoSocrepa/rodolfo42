/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsocrepa <rsocrepa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:51:39 by rsocrepa          #+#    #+#             */
/*   Updated: 2021/04/10 19:38:21 by rsocrepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char letra;

	if (n >= 0)
	{
		letra = 'P';
		write(1, &letra, 1);
	}
	else
	{
		letra = 'N';
		write(1, &letra, 1);
	}
}
