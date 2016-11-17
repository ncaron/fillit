/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:59:30 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:40:28 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a new string ending with a terminating character.
** Each character is initialized to the terminating character.
** Returns the string allocated.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char*)malloc(sizeof(char) * (size + 1));
	if (ptr)
		return (ft_memset(ptr, '\0', size + 1));
	return (NULL);
}
