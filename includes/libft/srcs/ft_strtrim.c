/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 14:10:43 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:02:52 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a copy of s with no leading and trailing whitespace.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	size_t	spaces;
	char	*s2;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	spaces = i;
	start = i;
	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
	{
		i--;
		spaces++;
	}
	if (spaces >= ft_strlen(s))
		return (ft_strnew(0));
	s2 = ft_strnew(ft_strlen(s) - spaces);
	if (s2)
		return (ft_strncpy(s2, &s[start], ft_strlen(s) - spaces));
	return (NULL);
}
