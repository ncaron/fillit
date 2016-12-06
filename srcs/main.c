/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:08:32 by Niko              #+#    #+#             */
/*   Updated: 2016/12/05 17:33:18 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int argc, char **argv)
{
	char *t_read;
	char **ts;

	if (argc == 2)
	{
		t_read = reader(argv[1]);
		ts = assign(t_read);
		init_map(ts);
	}
	else
		throw_error(1);
	return (0);
}
