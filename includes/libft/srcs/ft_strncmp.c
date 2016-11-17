/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:53:23 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:29:13 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographically compares the strings s1 and s2.
** Not more than n characters are compared.
** Returns an int, the difference of the first characters that don't match.
** Returns 0 of the strings are the same.
*/

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			s1_len;
	size_t			s2_len;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (i <= s1_len && i <= s2_len && i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 < c2 || c1 > c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
