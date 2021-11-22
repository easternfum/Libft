/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:02:09 by kfum              #+#    #+#             */
/*   Updated: 2021/11/22 14:13:03 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int i, size_t x)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int j;

	p1 = (unsigned char *) dest + x;
	p2 = (unsigned char *) src;
	j = 0;
	while (p1[j])
	{
		if (p2[j] == i)
		{
			p1[j] = p2[j];
			return (p1);
		}
		j++;
	}
	return (0);
}
