/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:52:24 by kfum              #+#    #+#             */
/*   Updated: 2021/11/29 11:17:40 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!s || !f)
	{
		return (0);
	}
	result = (char *)ft_memalloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
	{
		return (NULL);
	}
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
