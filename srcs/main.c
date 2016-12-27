/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:12:31 by Niko              #+#    #+#             */
/*   Updated: 2016/12/26 23:40:35 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Launches the program.
** While not solved, create a map, resize pieces and increase the size.
*/

int	main(int argc, char **argv)
{
	char	*map;
	char	**ts;
	int		t_count;
	int		size;
	int		solved;

	if (argc == 2)
	{
		solved = 0;
		ts = assign(reader(argv[1]), ft_strlen(reader(argv[1])));
		t_count = 0;
		while (ts[t_count])
			t_count++;
		size = smallest_square(ts, ft_int_sqrt(t_count * 4));
		while (!solved)
		{
			map = create_map(size);
			ts = resize_pieces(ts, t_count, size);
			solved = solve(map, ts);
			size++;
		}
	}
	else
		throw_error(3);
	return (0);
}
