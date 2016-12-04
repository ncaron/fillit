/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_chr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 13:49:07 by Niko              #+#    #+#             */
/*   Updated: 2016/12/04 14:07:05 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Replaces char c1 with char c2 in the string s.
*/

#include "../libft.h"

void	ft_replace_chr(char *s, char c1, char c2)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			s[i] = c2;
		i++;
	}
}
