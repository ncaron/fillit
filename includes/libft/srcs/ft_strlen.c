/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:09:47 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:05:29 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the number of characters preceeding terminating character.
*/

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
