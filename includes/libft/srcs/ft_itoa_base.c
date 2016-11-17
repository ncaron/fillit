/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:06:18 by Niko              #+#    #+#             */
/*   Updated: 2016/11/15 19:25:32 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The first paramater is a number in base ten to be converted to a base
** between 2 and 16 as specified by the second paramater.
** Result will always be positive unless specified base is base 10.
** Returns the converted value.
*/

#include "../libft.h"

static char	ft_checkchar(int n)
{
	if (n == 10)
		return ('A');
	else if (n == 11)
		return ('B');
	else if (n == 12)
		return ('C');
	else if (n == 13)
		return ('D');
	else if (n == 14)
		return ('E');
	else if (n == 15)
		return ('F');
	else
		return (n + '0');
}

char		*ft_itoa_base(int value, int base)
{
	char	*s;
	int		num;
	int		len;

	num = value;
	if (base == 10)
		return (ft_itoa(value));
	if (num < 0)
		value *= -1;
	else if (value == 0)
		return (ft_memset(ft_strnew(1), '0', 1));
	len = 0;
	while (num != 0)
	{
		len++;
		num /= base;
	}
	s = ft_strnew(len);
	while (--len >= 0)
	{
		s[len] = ft_checkchar(value % base);
		value /= base;
	}
	return (s);
}
