/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:42:45 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:12:27 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends a copy of the null-terminated string s1 to the end of the
** null-terminated string s1, then add a terminating character.
** s1 must have sufficient space to hold the result.
** Undefined behavior of the strings overlap.
** Returns a pointer to s1.
*/

#include "../libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *s3;

	s3 = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, s2);
	return (s3);
}
