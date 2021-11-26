/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:09:20 by kfum              #+#    #+#             */
/*   Updated: 2021/11/25 14:21:49 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist1;
	t_list	*newlist2;

	if (!lst || !f)
	{
		return (0);
	}
	newlist1 = f(lst);
	newlist2 = newlist1;
	while (lst->next)
	{
		lst = lst->next;
		newlist1->next = f(lst);
		if (newlist1->next == NULL)
		{
			return (0);
		}
		newlist1 = newlist1->next;
	}
	return (newlist2);
}
