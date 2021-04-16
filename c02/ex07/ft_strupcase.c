/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsocrepa <rsocrepa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:36:26 by rsocrepa          #+#    #+#             */
/*   Updated: 2021/04/16 00:50:45 by rsocrepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	*dest;

	dest = str;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] >= 127))
		{
			dest[i] = str[i] - 32;
		}
		i++;
	}
	return (dest);
}
