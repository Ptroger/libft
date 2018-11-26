/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:23:14 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/10 13:07:57 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	c;
	int		i;
	int		j;

	while (s2[j])
		j++;
	while (s1[i] && c <= len)
	{
		while (s1[c + i] == s2[i] && c <= len)
		{
			if (i == c - 1)
				return ((char *)s1 + c);
			i++;
		}
		i = 0;
		c++;
	}
	return (NULL);
}
