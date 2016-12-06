/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 20:54:43 by Niko              #+#    #+#             */
/*   Updated: 2016/12/05 17:33:10 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Opens, reads and closes a file.
** Returns a string of what was read.
*/

char	*reader(char *file)
{
	char	*t_read;
	int		fd;
	int		file_len;

	if ((fd = open(file, O_RDONLY)) == -1)
		throw_error(2);
	t_read = ft_strnew(BUF_SIZE);
	file_len = read(fd, t_read, BUF_SIZE);
	if ((fd = close(fd)) == -1)
		throw_error(3);
	return (t_read);
}
