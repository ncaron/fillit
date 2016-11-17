/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 00:29:30 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:39:02 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Frees the memory area and sets the pointer to NULL.
*/

#include "../libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
