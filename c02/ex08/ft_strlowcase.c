/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsocrepa <rsocrepa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:25:10 by rsocrepa          #+#    #+#             */
/*   Updated: 2021/04/13 19:43:12 by rsocrepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	*dest;

	dest = str;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			dest[i] = str[i] + 32;
		}
		i++;
	}
	return (dest);
}
