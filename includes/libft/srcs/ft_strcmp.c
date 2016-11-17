/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:37:16 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:27:40 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographically compares the strings s1 and s2.
** Returns an int, the difference between the first characters that are not the
** same, or 0 if the strings match.
*/

#include "../libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	size_t			s1_len;
	size_t			s2_len;
	unsigned char	c1;
	unsigned char	c2;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i <= s1_len && i <= s2_len)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 < c2 || c1 > c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
