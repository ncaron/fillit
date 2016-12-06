/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 19:25:29 by Niko              #+#    #+#             */
/*   Updated: 2016/12/05 17:33:04 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Throws an error based of error code given and exits the program.
*/

void	throw_error(int code)
{
	if (code == 1)
		ft_putstr("TODO: usage");
	else if (code == 2)
		ft_putstr("open() error");
	else if (code == 3)
		ft_putstr("close() error");
	else if (code == 4)
		ft_putstr("error");
	else
		ft_putstr("Unknown error");
	exit(-1);
}

/*
** Checks if tetriminos have exactly 12 dots and 4 hashes.
*/

void	check_ts(char **ts)
{
	int i;

	i = 0;
	while (ts[i])
	{
		if (ft_countchr(ts[i], '.') != 12 || ft_countchr(ts[i], '#') != 4 ||
				ft_countchr(ts[i], '\n') != 4)
			throw_error(4);
		i++;
	}
}

/*
** Checks number of connections for the hashes.
** If not 6 or 8, piece is not valid.
*/

void	check_conn(char **ts)
{
	int i;
	int j;
	int count;

	i = 0;
	while (ts[i])
	{
		count = 0;
		j = 0;
		while (ts[i][j])
		{
			if (ts[i][j] == '#' && ts[i][j + 1] == '#')
				count += 2;
			if (ts[i][j] == '#' && i + 5 < 20 && ts[i][j + 5] == '#')
				count += 2;
			j++;
		}
		if (count != 6 && count != 8)
			throw_error(4);
		i++;
	}
}

/*
** Launches the validator functions.
*/

void	validator(char **ts)
{
	check_ts(ts);
	check_conn(ts);
}
