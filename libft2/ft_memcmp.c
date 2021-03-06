/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:04:40 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 12:41:31 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int  ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char  *str1;
	unsigned char  *str2;

	if (s1 == s2 || n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
