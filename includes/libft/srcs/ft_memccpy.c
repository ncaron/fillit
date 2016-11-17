/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:26:34 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:01:15 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies bytes from string src to string dst.
** If c (converted to an unsigned char) occurs in string src, the copy stops
** and a pointer to the byte after the copy of c in string dst is returned.
** Otherwise, n bytes are copied and a NULL pointer is returned.
*/

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sdst;
	unsigned char	*ssrc;

	sdst = (unsigned char*)dst;
	ssrc = (unsigned char*)src;
	i = 0;
	while (n && *ssrc != (unsigned char)c)
	{
		*sdst++ = *ssrc++;
		n--;
	}
	if (n == 0)
		return (NULL);
	*sdst++ = *ssrc++;
	return (sdst);
}
