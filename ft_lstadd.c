/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:08:27 by kfum              #+#    #+#             */
/*   Updated: 2021/12/07 11:55:29 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !new)
	{
		return ;
	}
	if (!*alst)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *alst;
	}	
	*alst = new;
}
