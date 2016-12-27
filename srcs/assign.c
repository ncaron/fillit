/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 21:06:18 by Niko              #+#    #+#             */
/*   Updated: 2016/12/26 23:11:35 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Allocates memory to hold all the pieces in an array.
** 1 is added to t_count in case file is not of the correct format.
** Assigns each Tetrimino to a temporary array.
** Returns an array of Tetriminos.
*/

char	**assign(char *t_read, int file_len)
{
	char	**tmp;
	char	**ts;
	int		t_count;
	int		i;
	int		j;

	t_count = (file_len / 20) + 1;
	if (!(tmp = (char**)malloc(sizeof(char*) * (t_count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i <= file_len && j < t_count)
	{
		if (file_len - i < 20)
			tmp[j] = ft_strsub(t_read, i, file_len - i);
		else
			tmp[j] = ft_strsub(t_read, i, 20);
		j++;
		i += 21;
	}
	tmp[j] = NULL;
	check_file(tmp);
	ts = check_ts(tmp, t_count, load_to_compare());
	add_nl(ts);
	return (ts);
}

/*
** Adds a new line to the appropriate place in the piece.
*/

void	add_nl(char **ts)
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
			if ((j % 4) == 0 && j != 0)
			{
				ts[i][j + count] = '\n';
				count++;
			}
			j++;
		}
		i++;
	}
	assign_letters(ts);
}

/*
** Changes hashes to the corresponding letter.
** A for the first Tetrimino, B for the second and so on.
*/

void	assign_letters(char **ts)
{
	char	letter;
	int		i;

	letter = 'A';
	i = 0;
	while (ts[i])
	{
		ft_replace_chr(ts[i], '#', letter);
		letter++;
		i++;
	}
}
