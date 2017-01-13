/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 21:10:03 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 21:12:45 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the copy of an array.
*/

#include "../libft.h"

char	**ft_arrdup(char **a)
{
	char	**arr;
	int		i;

	i = 0;
	while (a[i])
		i++;
	arr = (char**)malloc(sizeof(char*) * (i + 1));
	i = 0;
	while (a[i])
	{
		arr[i] = ft_strdup(a[i]);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
