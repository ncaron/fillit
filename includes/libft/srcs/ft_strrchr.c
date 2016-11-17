/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:44:28 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:20:44 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Located the last occurence of c (converted to an unsigned char) in s.
** The terminating character is considered part of s.
** Returns a pointer to the located character or NULL.
*/

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	sc;
	char			*ss;

	sc = (unsigned char)c;
	ss = (char*)s;
	i = ft_strlen(s);
	if (sc == '\0')
		return (&ss[i]);
	while (i >= 0)
	{
		if (ss[i] == sc)
			return (&ss[i]);
		i--;
	}
	return (NULL);
}
