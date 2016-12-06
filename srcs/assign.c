/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 15:51:22 by Niko              #+#    #+#             */
/*   Updated: 2016/12/05 17:33:52 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

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
** Changes hashes to letters.
** A for the first piece, B for the second, etc.
*/

void	assign_letters(char **ts)
{
	int		i;
	char	letter;

	letter = 'A';
	i = 0;
	while (ts[i])
	{
		ft_replace_chr(ts[i], '#', letter);
		ft_replace_chr(ts[i], '\n', '.');
		letter++;
		i++;
	}
}

/*
** Allocates enough memory to hold all the pieces in an array.
** Returns an array of tetriminos.
*/

char	**assign(char *t_read)
{
	int		t_count;
	int		file_len;
	char	**ts;

	file_len = ft_strlen(t_read);
	t_count = (file_len / 20) + 1;
	ts = (char**)malloc(sizeof(char*) * (t_count + 1));
	if (!ts)
		return (NULL);
	assign_ts(ts, t_read, file_len);
	validator(ts);
	assign_letters(ts);
	return (ts);
}
