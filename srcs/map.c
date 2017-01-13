/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 03:46:21 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 20:32:10 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Creates a map based on the size passed in.
*/

char	*create_map(int size)
{
	char	*map;
	int		full_size;
	int		i;

	full_size = (size * size) + size;
	map = ft_strnew(full_size);
	i = 1;
	while (i < full_size)
	{
		if (i % (size + 1) == 0 && i != 0)
			map[i - 1] = '\n';
		else
			map[i - 1] = '.';
		i++;
	}
	return (map);
}
