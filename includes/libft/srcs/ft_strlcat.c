/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:01:52 by Niko              #+#    #+#             */
/*   Updated: 2016/11/13 04:15:02 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends the null-terminated string src to the end of dst.
** Appends at most size - ft_strlen(dst) - 1 bytes. Terminating the result.
** Returns the total length of the string they tried to create.
*/

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_size;
	size_t		i;
	char		*d;
	const char	*s;

	d = dst;
	i = size;
	while (i-- != 0 && *d)
		d++;
	dst_size = (size_t)(d - dst);
	i = size - dst_size;
	if (i <= 0)
		return (size + ft_strlen(src));
	s = src;
	while (*s && i-- > 1)
		*d++ = *s++;
	while (*s)
		s++;
	*d = '\0';
	return (dst_size + (size_t)(s - src));
}
