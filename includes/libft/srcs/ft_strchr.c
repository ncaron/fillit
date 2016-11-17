/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:33:48 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:19:39 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Located the first occurence of c (converted to an unsigned char) in s.
** The terminated characted is considered part of s.
** Returns a pointer to the located character or NULL.
*/

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	sc;
	char			*ss;

	sc = (unsigned char)c;
	ss = (char*)s;
	while (*ss)
	{
		if (*ss == c)
			return (ss);
		ss++;
	}
	if (sc == '\0')
		return (ss);
	return (NULL);
}
