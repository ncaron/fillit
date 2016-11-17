/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:28:28 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 13:55:48 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes len bytes of value c (converted to an unsigned char) to the string b.
** Returns its first argument.
*/

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char*)b;
	while (len-- > 0)
		*s++ = (unsigned char)c;
	return (b);
}
