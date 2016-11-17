/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:13:50 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 14:25:25 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of the null-terminated string little in the
** string big. No more than len characters are searched.
** Characters after a terminating character are not searched.
** Returns a pointer to the first character of the first occurence of little.
** If little is empty, big is returned.
** If little is not found, NULL is returned.
*/

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (ft_strequ(little, ""))
		return ((char*)big);
	while (big[i] && i < len && little_len + i <= len)
	{
		if (ft_strnequ(&big[i], little, little_len))
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
