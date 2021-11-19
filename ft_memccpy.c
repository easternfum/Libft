/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:02:09 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:07:15 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int i, size_t x)
{
	char	*p1;
	char	*p2;

	p1 = (char*) dest + x;
	p2 = (char*) src;
	while (*p1)
	{
		if (*p2 == i)
		{
			*p1 = *p2;
			return (p1);
		}
		p2++;
	}
	return (0);
}
