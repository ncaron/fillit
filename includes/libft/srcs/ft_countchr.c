/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:23:50 by Niko              #+#    #+#             */
/*   Updated: 2016/12/03 13:31:34 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts the number of times c appears in s.
** Returns the count.
*/

#include "../libft.h"

int	ft_countchr(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}
