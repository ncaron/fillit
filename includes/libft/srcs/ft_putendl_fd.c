/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:36:25 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:07:51 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs s followed by a new line to the file descriptor fd.
*/

#include "../libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
