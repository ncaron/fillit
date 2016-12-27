/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 22:11:05 by Niko              #+#    #+#             */
/*   Updated: 2016/12/26 21:31:18 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Count the number of times a letter appears in a row.
** Returns the max amount of times.
*/

int		consecutive_letter(char *t)
{
	int i;
	int count;
	int max;

	count = 1;
	max = 0;
	i = 0;
	while (t[i])
	{
		if (ft_isupper(t[i]) && ft_isupper(t[i + 1]))
			count++;
		else
		{
			if (count > max)
				max = count;
			count = 1;
		}
		i++;
	}
	return (max);
}

/*
** Calculates the smallest possible square for all pieces.
** The smallest possible square for the solution will be the max.
** Returns the smallest possible square.
*/

int		smallest_square(char **ts, int size)
{
	int i;
	int	piece_size;
	int	size_nl;
	int	size_letter;
	int smallest_square;

	smallest_square = size;
	i = 0;
	while (ts[i])
	{
		size_nl = ft_countchr(ts[i], '\n') + 1;
		size_letter = consecutive_letter(ts[i]);
		piece_size = size_letter >= size_nl ? size_letter : size_nl;
		if (piece_size > smallest_square)
			smallest_square = piece_size;
		i++;
	}
	return (smallest_square);
}

/*
** Replaces the dots with the correct letter and new lines
*/

void	assign_new_piece(char *tmp, char *t, int to_add)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tmp[i])
	{
		if (ft_isupper(tmp[i]))
			t[j] = tmp[i];
		if (tmp[i] == '\n')
		{
			j += to_add;
			t[j] = tmp[i];
		}
		j++;
		i++;
	}
}

/*
** Resize the pieces based on the size of the map.
** Creates a new piece of dots only, dots will be replaced in assign_new_piece.
** Returns a new array of resized pieces.
*/

char	**resize_pieces(char **tmp, int t_count, int size)
{
	char	**ts;
	int		to_add;
	int		full_size;
	int		i;

	ts = (char**)malloc(sizeof(char*) * (t_count + 1));
	i = 0;
	while (tmp[i])
	{
		to_add = size - ft_strlenchr(tmp[i], '\n');
		full_size = ft_strlen(tmp[i]) + (ft_countchr(tmp[i], '\n') * to_add);
		ts[i] = ft_strnew(full_size);
		ft_memset(ts[i], '.', full_size);
		assign_new_piece(tmp[i], ts[i], to_add);
		i++;
	}
	ts[i] = NULL;
	return (ts);
}
