/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:14:26 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:31:35 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts the initial part of the string to an int, removing any leading
** whitespaces and returns the result.
*/

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - '0');
	return (num * sign);
}
