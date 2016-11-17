/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:01:29 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:10:54 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a new link.
** Content and content_size are initialized by copy of the parameters.
** If content is nul, the variable content is initialized to NULL and
** the variable content_size is initialized to 0.
** The variable next is initialized to NULL.
** Returns the new link.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = (void*)malloc(content_size);
		if (!list->content)
			free(list->content);
		else
			ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}
