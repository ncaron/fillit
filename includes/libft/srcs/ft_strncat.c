/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:37:59 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:25:57 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, the add a terminating character.
** Appends no more than n characters from s2.
** Undefined behavior if the strings overlap.
** Returns a pointer to s1.
*/

#include "../libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *s3;

	s3 = s1;
	while (*s1)
		s1++;
	while (*s2 && n--)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s3);
}
