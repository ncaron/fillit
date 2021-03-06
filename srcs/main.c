/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:12:31 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 20:57:38 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Launches the program.
** Creates necessary variables and passes them to the solve function.
*/

int	main(int argc, char **argv)
{
	char	**ts;
	char	*t_read;
	char	*map;

	if (argc == 2)
	{
		map = NULL;
		t_read = reader(argv[1]);
		ts = assign(t_read, ft_strlen(t_read));
		solve(ts, &map);
		ft_strdel(&t_read);
		ft_putendl(map);
		ft_strdel(&map);
	}
	else
		throw_error(3);
	return (0);
}
