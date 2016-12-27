/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 23:00:33 by Niko              #+#    #+#             */
/*   Updated: 2016/12/26 23:27:33 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Checks if the piece can be placed at the current position of the map.
** Returns 1 if yes, 0 if no.
*/

int		check_piece(char *map, char *t, int piece_num)
{
	int i;
	int j;

	i = 0;
	j = ft_strlenchr(t, 'A' + piece_num);
	if (ft_strlen(map) < (ft_strlen(t) - j))
		return (0);
	while (map[i] && t[j])
	{
		if (ft_isupper(t[j]) && map[i] != '.')
			return (0);
		j++;
		i++;
	}
	return (1);
}

/*
** Places the piece at the given position of the map.
*/

void	place_piece(char *map, char *t, int piece_num)
{
	int i;
	int j;

	i = 0;
	j = ft_strlenchr(t, 'A' + piece_num);
	while (map[i] && t[j])
	{
		if (map[i] != '\n' && t[j] != '\n' && !ft_isupper(map[i]))
			map[i] = t[j];
		j++;
		i++;
	}
}

/*
** Removes the given piece from the map by replacing it's letters with dots.
** Returns the position of the first letter in the map.
*/

int		remove_piece(char *map, int piece_num)
{
	int i;
	int found;
	int start;

	found = 0;
	i = 0;
	while (map[i])
	{
		if (map[i] == 'A' + piece_num)
		{
			map[i] = '.';
			if (found == 0)
			{
				start = i;
				found = 1;
			}
		}
		i++;
	}
	return (start);
}

/*
** Loops through the map and pieces, placing each one.
** If the piece can be placed at the specific location of the map, place it.
** If it can't be placed, try placing it on the next available spot on the map.
** If the map reaches the end, remove the previously placed piece and
** try again starting at the next available dot after the starting point
** of the piece that was just removed.
** If there was no previously placed pieces,
** the loop exits and the function returns 0.
** If ts[j] is false, it means all pieces were placed,
** print the map and return 1.
*/

int		solve(char *map, char **ts)
{
	int i;
	int j;
	int fits;

	i = 0;
	j = 0;
	while (map[i] && ts[j])
	{
		fits = check_piece(&map[i], ts[j], j);
		if (fits)
		{
			place_piece(&map[i], ts[j], j);
			j++;
			i = ft_strlenchr(map, '.');
		}
		else
			i++;
		if (!map[i] && !fits && j > 0)
			i = remove_piece(map, --j) + 1;
	}
	if (ts[j])
		return (0);
	ft_putendl(map);
	return (1);
}
