/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:37:03 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:04:34 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a new string representing n.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

static int	ft_len(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_min(void)
{
	char *s;

	s = ft_strnew(ft_strlen("-2147483648"));
	ft_strcpy(s, "-2147483648");
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_min());
	s = ft_strnew(ft_len(n));
	if (s)
	{
		i = ft_len(n) - 1;
		if (n == 0)
			s[0] = '0';
		else if (n < 0)
		{
			s[0] = '-';
			n *= -1;
		}
		while (n > 0)
		{
			s[i--] = (n % 10) + '0';
			n /= 10;
		}
		return (s);
	}
	return (NULL);
}
