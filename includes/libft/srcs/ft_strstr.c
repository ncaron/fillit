/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 22:42:01 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:25:39 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of the null-terminated string little in the
** null-terminated string big.
** Returns a pointer to the first character of the first occurence of little.
** If little is empty, big is returnedi
** If little is not found. Returns NULL.
*/

#include "../libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	if (ft_strequ(little, ""))
		return ((char*)big);
	while (*big)
	{
		if (ft_strnequ(big, little, ft_strlen(little)))
			return ((char*)big);
		big++;
	}
	return (NULL);
}
