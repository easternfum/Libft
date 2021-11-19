/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:45:59 by kfum              #+#    #+#             */
/*   Updated: 2021/11/11 13:37:28 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char *p;

	p = (char *)malloc(sizeof(char) * *p + 1);
	if (p == NULL)
	{
		return NULL;
	}
	p[size] = '\0';
	while (size--)
	{
		p[size] = '\0';
	}
	return (p);	
}