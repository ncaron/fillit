/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_sqrt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 21:14:17 by Niko              #+#    #+#             */
/*   Updated: 2016/12/03 22:48:47 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Finds the square root of an int, rounding up to the nearest int.
** Returns the found square root.
*/

#include "../libft.h"

int	ft_int_sqrt(int n)
{
	int i;
	int result;

	if (n < 0)
	{
		ft_putstr("ft_int_sqrt() error");
		exit(-1);
	}
	result = 0;
	i = 0;
	while (i <= n)
	{
		if (i * i == n)
		{
			result = i;
			break ;
		}
		else if (i * i < n && (i + 1) * (i + 1) > n)
		{
			result = i + 1;
			break ;
		}
		i++;
	}
	return (result);
}
