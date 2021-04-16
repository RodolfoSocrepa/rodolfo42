/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsocrepa <rsocrepa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:45:39 by rsocrepa          #+#    #+#             */
/*   Updated: 2021/04/13 17:49:46 by rsocrepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z' && *str < 'a') || (*str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
