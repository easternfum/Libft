/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:19:54 by kfum              #+#    #+#             */
/*   Updated: 2021/11/19 11:10:40 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	result = dest + ft_strlen(dest);
	while (i < len)
	{
		*result++ = src[i];
		i++;
	}
	*result = '\0';
	return (dest);
}
