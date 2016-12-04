/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 16:07:06 by Niko              #+#    #+#             */
/*   Updated: 2016/12/04 01:21:24 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Prints a basic map.
** Map size depends on smallest possible square.
*/

void	init_map(char **ts)
{
	char	*map;
	int		num_pieces;
	int		init_size;
	int		full_init_size;
	int		i;

	num_pieces = 0;
	while (ts[num_pieces])
		num_pieces++;
	init_size = ft_int_sqrt(num_pieces * 4);
	full_init_size = (init_size * init_size) + init_size;
	map = ft_strnew(full_init_size);
	i = 1;
	while (i < full_init_size)
	{
		if (i % (init_size + 1) == 0)
			map[i - 1] = '\n';
		else
			map[i - 1] = '.';
		i++;
	}
	ft_putstr(map);
}
