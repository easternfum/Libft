/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:29:30 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:07:27 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t i;

	i = 0;
	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	while (i < len)
	{
		p1[i] = p2[i];
		i++;
	}
	p1[i] = '\0';
	return (p1);
}
