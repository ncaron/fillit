/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:40:06 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:08:21 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies to string src to dst including the terminating character.
** Undefined behavior if the strings overlap.
** Returns dst.
*/

#include "../libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
