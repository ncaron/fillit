/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:50:08 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:52:16 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and retuns a new string ending with a terminating character.
** The string is the result of concatenating s1 and s2.
** If allocation fails, returns NULL.
** Returns the new string.
*/

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = ft_strnew(len1 + len2);
	i = 0;
	if (s3)
	{
		while (i < len1 + len2)
		{
			if (i < len1)
				s3[i] = s1[i];
			if (i < len2)
				s3[len1 + i] = s2[i];
			i++;
		}
		s3[i] = '\0';
	}
	return (s3);
}
