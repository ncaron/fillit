/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 20:54:43 by Niko              #+#    #+#             */
/*   Updated: 2016/12/04 01:11:48 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Called when the file is invalid.
** Prints error and exits the program.
*/

void	invalid(int code)
{
	if (code == 1)
		ft_putstr("open() error");
	else if (code == 2)
		ft_putstr("close() error");
	else if (code == 3)
		ft_putstr("error");
	exit(-1);
}

/*
** Assigns each tetrimino in a tetrimino array.
*/

void	assign_ts(char **ts, char *file, int file_len)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	while (i <= file_len)
	{
		if (file_len - i < 20)
			len = file_len - i;
		else
			len = 20;
		ts[j] = ft_strsub(file, i, len);
		j++;
		i += 21;
	}
	ts[j] = NULL;
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
			invalid(3);
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
			if (ts[i][j] == '#')
			{
				if (ts[i][j + 1] == '#')
					count += 2;
				if (i + 5 < 20 && ts[i][j + 5] == '#')
					count += 2;
			}
			j++;
		}
		if (count != 6 && count != 8)
			invalid(3);
		i++;
	}
}

/*
** Opens, reads and closes a file.
** Calculates the length of the file. (Adds one incase of remainder)
** Calculates number of ts.
*/

void	reader(char *file)
{
	char	*tmp;
	char	**ts;
	int		t_count;
	int		fd;
	int		file_len;

	if ((fd = open(file, O_RDONLY)) == -1)
		invalid(1);
	tmp = ft_strnew(BUF_SIZE);
	file_len = read(fd, tmp, BUF_SIZE);
	if ((fd = close(fd)) == -1)
		invalid(2);
	t_count = (file_len / 20) + 1;
	ts = (char**)malloc(sizeof(char*) * (t_count + 1));
	assign_ts(ts, tmp, file_len);
	free(tmp);
	check_ts(ts);
	check_conn(ts);
	init_map(ts);
}
