/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:53:03 by kfum              #+#    #+#             */
/*   Updated: 2021/11/26 14:22:22 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	input_part1(unsigned char *s1, unsigned char *s2, \
size_t i, size_t n)
{
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (i);
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)str1;
	p2 = (unsigned char *)str2;
	if (!str1 && !str2)
		return (0);
	if ((p1 - p2) < 0)
	{
		input_part1(p1, p2, i, n);
	}
	else
	{
		while (n > 0)
		{
			p1[n - 1] = p2[n - 1];
			n--;
		}
	}	
	return (p1);
}
