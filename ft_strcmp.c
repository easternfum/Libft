/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:03:47 by kfum              #+#    #+#             */
/*   Updated: 2021/11/23 13:53:10 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	*newstr1;
	unsigned char	*newstr2;
	int				i;
	int				j;

	newstr1 = (unsigned char *)str1;
	newstr2 = (unsigned char *)str2;
	i = 0;
	j = 0;
	while ((newstr1[i] != '\0') && (newstr2[j] != '\0') \
	&& (newstr1[i] == newstr2[j]))
	{
		i++;
		j++;
	}
	return (newstr1[i] - newstr2[j]);
}
