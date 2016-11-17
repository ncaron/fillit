/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:45:38 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:36:18 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If c is an uppercase character, returns the lowercase version.
** Otherwise, returns c.
*/

#include "../libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
