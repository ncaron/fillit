/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:21:59 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 21:05:44 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Throws an error based on the error code given and exits the program.
*/

void	throw_error(int code)
{
	if (code == 1)
		ft_putendl("open() error");
	else if (code == 2)
		ft_putendl("close() error");
	else if (code == 3)
		ft_putendl("usage: ./fillit [FILE_NAME]");
	else if (code == 4)
		ft_putendl("error");
	exit(-1);
}

/*
** Counts the number of dots, hashes and new lines for each piece.
** Each piece requires 12 dots, 4 hashes and 4 new lines.
** If a piece is invalid, throw error.
*/

void	check_file(char **tmp)
{
	int i;

	i = 0;
	while (tmp[i])
	{
		if (ft_countchr(tmp[i], '.') != 12 || ft_countchr(tmp[i], '#') != 4 ||
						ft_countchr(tmp[i], '\n') != 4)
			throw_error(4);
		i++;
	}
}

/*
** Creates an array of all possible valid Tetriminos to compare with input.
** Returns the array of valid Tetriminos.
*/

char	**load_to_compare(void)
{
	char **to_compare;

	if (!(to_compare = (char**)malloc(sizeof(char*) * 20)))
		return (NULL);
	to_compare[0] = ft_strdup(I1);
	to_compare[1] = ft_strdup(I2);
	to_compare[2] = ft_strdup(J1);
	to_compare[3] = ft_strdup(J2);
	to_compare[4] = ft_strdup(J3);
	to_compare[5] = ft_strdup(J4);
	to_compare[6] = ft_strdup(L1);
	to_compare[7] = ft_strdup(L2);
	to_compare[8] = ft_strdup(L3);
	to_compare[9] = ft_strdup(L4);
	to_compare[10] = ft_strdup(O1);
	to_compare[11] = ft_strdup(S1);
	to_compare[12] = ft_strdup(S2);
	to_compare[13] = ft_strdup(T1);
	to_compare[14] = ft_strdup(T2);
	to_compare[15] = ft_strdup(T3);
	to_compare[16] = ft_strdup(T4);
	to_compare[17] = ft_strdup(Z1);
	to_compare[18] = ft_strdup(Z2);
	to_compare[19] = NULL;
	return (to_compare);
}

/*
** Compares passed in Tetriminos against a list of valid Tetriminos.
** If passed in Tetrimino is not valid, throw and error.
** If it is valid, add it to an array of valid Tetriminos.
** Returns the array of valid Tetriminos.
*/

char	**check_ts(char **tmp, int t_count, char **to_compare)
{
	char	**ts;
	int		i;
	int		j;

	if (!(ts = (char**)malloc(sizeof(char*) * (t_count + 1))))
		return (NULL);
	i = 0;
	while (tmp[i])
	{
		ft_replace_chr(tmp[i], '\n', '.');
		j = 0;
		while (to_compare[j])
		{
			if (ft_strstr(tmp[i], to_compare[j]))
				break ;
			if (j == 18)
				throw_error(4);
			j++;
		}
		ts[i++] = ft_strdup(to_compare[j]);
	}
	ts[i] = NULL;
	ft_arrdel(to_compare);
	ft_arrdel(tmp);
	return (ts);
}
