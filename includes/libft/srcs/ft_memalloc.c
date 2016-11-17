/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:02:08 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:37:17 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a new memory area.
** The memory allocated is initialized to 0.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void*)malloc(size);
	if (ptr)
	{
		ft_memset(ptr, 0, size);
		return (ptr);
	}
	return (NULL);
}
