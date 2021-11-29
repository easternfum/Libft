/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:54:50 by kfum              #+#    #+#             */
/*   Updated: 2021/11/29 11:18:00 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	size_t	i;
	size_t	x;

	x = ft_strlen(src);
	result = (char *)ft_memalloc(sizeof(*src) * (x + 1));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
