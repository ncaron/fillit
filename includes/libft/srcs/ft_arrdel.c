/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 16:21:49 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 20:19:30 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes in an array of strings and frees everything.
*/

#include "../libft.h"

void	ft_arrdel(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_strdel(&s[i]);
		i++;
	}
	free(s);
	s = NULL;
}
