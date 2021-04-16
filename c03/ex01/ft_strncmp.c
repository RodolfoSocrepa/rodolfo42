/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsocrepa <rsocrepa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:32:08 by rsocrepa          #+#    #+#             */
/*   Updated: 2021/04/15 20:11:38 by rsocrepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	result = 0;
	i = 0;
	if (i != n)
	{
		while ((i != n) && (s1[i] == s2[i]) && (s1[i]) && (s2[i]))
		{
			i++;
		}
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (result);
}
