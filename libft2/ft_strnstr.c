/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:23:14 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 16:50:13 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t i;
	int pos;
	int length;

	i = 0;
	pos = 0;
	length = 0;
	while (lit[length] != '\0')
		length++;
	if (length == 0)
		return ((char *)big);
	while (big[i] && len >= i)
	{
		while (lit[pos] == big[i + pos] && i + pos <= len)
		{
			if (pos == length - 1)
			{
				return ((char *)big + i);
			}
			pos++;
		}
		pos = 0;
		i++;
	}
	return (NULL);
}
