/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 01:53:29 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:26:24 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a fresh substring from s.
** The substring starts at start and is of len characters long.
** If start and len does not refer to a valid string, the behavior is undefined.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;
	int		j;

	i = start;
	j = 0;
	if (!s || ft_strlen(s) < start + len)
		return (NULL);
	s2 = ft_strnew(len);
	if (s2)
	{
		ft_strncpy(s2, &s[start], len);
		s2[len] = '\0';
		return (s2);
	}
	return (NULL);
}
