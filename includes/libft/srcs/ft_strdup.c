/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:07:40 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:06:42 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocated memory for a copy of s1, does the copy and returns a pointer to it.
** NULL is returned if insufficient memory is available.
*/

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = ft_strnew(ft_strlen(s1));
	if (s2)
		s2 = ft_strcpy(s2, s1);
	return (s2);
}
