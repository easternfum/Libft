/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:53:03 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:06:41 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	size_t i;
	unsigned char *p1;
	unsigned char *p2;

	i = 0;
	p1 = (unsigned char*) str1;
	p2 = (unsigned char*) str2;
	while (i < len)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}
