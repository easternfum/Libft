/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:57:01 by kfum              #+#    #+#             */
/*   Updated: 2021/11/22 15:16:17 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	x;

	x = len - start;
	result = (char *)malloc(sizeof(char) * (x + 1));
	if (!result)
	{
		return (0);
	}
	i = start;
	while (i < len && (*(s + i) != '\0'))
	{
		*result = *(s + i);
		result++;
		i++;
	}
	*result = '\0';
	return (result - x);
}
