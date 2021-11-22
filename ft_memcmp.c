/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:27:44 by kfum              #+#    #+#             */
/*   Updated: 2021/11/19 11:06:27 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t x)
{
	size_t			i;
	size_t			j;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	j = 0;
	p1 = (unsigned char *) str1;
	p2 = (unsigned char *) str2;
	while ((i < x) && (j < x))
	{
		if (p1[i] != p2[j])
		{
			return (p1[i] - p2[j]);
		}
		i++;
		j++;
	}
	return (0);
}
