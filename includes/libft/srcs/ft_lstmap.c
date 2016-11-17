/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:11:21 by Niko              #+#    #+#             */
/*   Updated: 2016/11/10 16:23:31 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies of function f to each link and creates a new list using the result
** of the successive applications of f.
** Returns the new list.
** If allocation fails, returns NULL.
*/

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *first;

	if (!lst)
		return (NULL);
	first = f(lst);
	list = first;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}
	return (first);
}
