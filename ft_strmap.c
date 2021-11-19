/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:51:57 by kfum              #+#    #+#             */
/*   Updated: 2021/11/12 10:52:14 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *p1;
	char *p2;
	char *result;

	result = (char *)malloc(sizeof(ft_strlen((char *)s) + 1));
	if (!*s || !result)
	{
		return (0);
	}
	p1 = (char *)s;
	p2 = result;
	while (*p1)
	{
		*(p2++) = f(*(p1++));
	}
	return (result);
}
