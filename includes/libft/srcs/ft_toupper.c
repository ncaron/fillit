/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:41:28 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:35:46 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If c is a lowercase character, returns the uppercase version.
** Otherwise, returns c.
*/

#include "../libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
