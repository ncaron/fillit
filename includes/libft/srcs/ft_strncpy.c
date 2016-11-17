/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:51:55 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:10:31 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies at most len characters from src into dst.
** If src is less than len characters long, the remainder of dst is filled
** with terminating characters. Otherwise, dst is not terminated.
** Returns a pointer the the terminating character of dst.
*/

#include "../libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < len)
	{
		while (i < len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
