/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:51:46 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 13:57:25 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes n zeroes bytes to the string s.
** If n is zero, ft_bzero() does nothing.
*/

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
