/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:52:24 by kfum              #+#    #+#             */
/*   Updated: 2021/11/22 13:56:44 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = (char *)malloc(sizeof(ft_strlen((char *)s) + 1));
	if (!*s || !result)
	{
		return (0);
	}
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
