/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:00:58 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:04:18 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of c (converted to an unsigned char) in s.
** Returns a pointer to the byte located, or NULL.
*/

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ss;

	ss = (unsigned char*)s;
	while (n && *ss != (unsigned char)c)
	{
		ss++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return (ss);
}
