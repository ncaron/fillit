/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:11:39 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:03:52 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns an array of string using c and a delimiter.
** Returns the array of strings,
*/

#include "../libft.h"

static int	ft_wcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	if (s[i] == c)
		count = 0;
	else
		count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static int	ft_wlen(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**wordarr;
	int		wcount;
	int		empty;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	empty = ft_strcmp(s, "");
	wcount = ft_wcount(s, c);
	wordarr = (char**)malloc(sizeof(char*) * (wcount + 1));
	if (!wordarr)
		return (NULL);
	while (i < wcount && empty != 0)
	{
		while (s[j] == c)
			j++;
		wordarr[i] = ft_strsub(s, j, ft_wlen(&s[j], c));
		j += ft_wlen(&s[j], c);
		i++;
	}
	wordarr[i] = NULL;
	return (wordarr);
}
