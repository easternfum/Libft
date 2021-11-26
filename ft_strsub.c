/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:57:01 by kfum              #+#    #+#             */
/*   Updated: 2021/11/26 13:15:39 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t n)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
	{
		return (0);
	}
	if (start > ft_strlen(s))
	{
		return (0);
	}
	result = (char *)ft_memalloc(sizeof(char) * n + 1);
	if (result == NULL)
	{
		return (0);
	}
	while (i < n)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
