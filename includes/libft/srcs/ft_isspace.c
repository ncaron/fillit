/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:20:55 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:24:50 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns 1 if c is whitespace.
** Returns 0 if c is not whitespace.
*/

#include "../libft.h"

int	ft_isspace(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (uc == '\t' || uc == '\n' || uc == '\v' || uc == '\f' || uc == '\r' ||
				uc == ' ')
		return (1);
	return (0);
}
