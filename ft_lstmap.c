/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:09:20 by kfum              #+#    #+#             */
/*   Updated: 2021/11/29 11:44:34 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist1;
	t_list	*newlist2;
	t_list	*finallist;

	if (!lst || !f)
		return (NULL);
	newlist1 = f(lst);
	finallist = ft_lstnew(newlist1->content, newlist1->content_size);
	if (finallist)
	{
		newlist2 = finallist;
		lst = lst->next;
		while (lst)
		{
			newlist1 = f(lst);
			newlist2->next = ft_lstnew(newlist1->content, \
			newlist1->content_size);
			if (newlist2 == NULL)
				return (NULL);
			newlist2 = newlist2->next;
			lst = lst->next;
		}
	}
	return (finallist);
}
