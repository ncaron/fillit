/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:22:24 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:06:11 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs s on the standard output followed by a new line.
*/

#include "../libft.h"

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}
