/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:39:30 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:25:20 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts the lenght of the string until c is reached.
** Return value does not include c.
** If c is not found, full length of the string is returned.
*/

#include "../libft.h"

size_t	ft_strlenchr(const char *s, int c)
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}
