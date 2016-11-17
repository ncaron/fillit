/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:40:38 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:03:07 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies len bytes from src to dst.
** The two strings may overlap but copy is done in a non-destructive manner.
** Returns the original value of dst.
*/

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sdst;
	char	*ssrc;

	sdst = (char*)dst;
	ssrc = (char*)src;
	i = 0;
	if (ssrc <= sdst && ssrc + len > sdst)
	{
		i = len;
		while (i > 0)
		{
			sdst[i - 1] = ssrc[i - 1];
			i--;
		}
		return (sdst);
	}
	return (ft_memcpy(dst, src, len));
}
