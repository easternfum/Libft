/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:03:47 by kfum              #+#    #+#             */
/*   Updated: 2021/11/19 11:10:07 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	if ((str1[i] != '\0') && (str2[j] != '\0') && (str1[i] == str2[j]))
	{
		i++;
		j++;
	}
	result = str1[i] - str2[j];
	if (result > 0)
	{
		return (1);
	}
	else if (result < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
