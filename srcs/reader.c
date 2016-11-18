/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:06:25 by Niko              #+#    #+#             */
/*   Updated: 2016/11/17 19:29:31 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** Counts the number of tetriminos and total number of characters.
** Assigns count and total to the array count_total that is passed in.
*/

void	tetrimino_count(char *file, size_t len, int *count_total)
{
	int i;
	int count;
	int total;

	len = ft_strlen(file);
	i = 0;
	count = 0;
	total = 0;
	while ((size_t)i <= len)
	{
		if ((file[i] == '\n' && file[i + 1] == '\n') || file[i] == '\0')
			count++;
		if (file[i] != '\n' && file[i] != '\0')
			total++;
		i++;
	}
	count_total[0] = count;
	count_total[1] = total;
}

/*
** Checks if tetrimino count corresponds to character count.
** Checks if all characters are only '.', '#' or '\n'.
** Prints an error and exits the program if any of the tests fail.
*/

void	check_valid_file(char *file, int *count_total)
{
	int	i;
	int invalid;

	invalid = 0;
	i = 0;
	tetrimino_count(file, ft_strlen(file), count_total);
	if (count_total[0] * 16 != count_total[1])
		invalid = 1;
	while (file[i] && !invalid)
	{
		if (file[i] == '\n' && file[i + 1] == '\n' && file[i + 2] == '\n')
			invalid = 1;
		if (file[i] != '.' && file[i] != '#' && file[i] != '\n')
			invalid = 1;
		i++;
	}
	if (invalid)
	{
		ft_putstr("error\n");
		exit(-1);
	}
}

/*
** Will create an array of valid Tetriminos.
*/

void	assign_tetriminos(char *file)
{
	int		count_total[2];

	tetrimino_count(file, ft_strlen(file), count_total);
	check_valid_file(file, count_total);
}

/*
** Opens and reads a file, assigning its contents to buf.
*/

int		reader(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		exit(-1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		exit(-1);
	}
	assign_tetriminos(buf);
	ft_putstr("valid\n");
	return (0);
}
