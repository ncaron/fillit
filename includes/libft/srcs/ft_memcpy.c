/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:05:17 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 13:59:09 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
** Returns the original value of dst.
*/

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*sdst;
	char	*ssrc;

	sdst = (char*)dst;
	ssrc = (char*)src;
	while (n--)
		*sdst++ = *ssrc++;
	return (dst);
}
