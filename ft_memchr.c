/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:44:00 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:07:20 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *str, int x, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char*)str;
	p2 = NULL;
	while ((str != NULL) && (len--))
	{
		if (*p1 != x)
		{
			p1++;
		}
		else
		{
			p2 = p1;
		}
	}
	return (p2);
}
