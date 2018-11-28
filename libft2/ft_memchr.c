/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:16:06 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 12:14:09 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (((unsigned char*)s)[i] != ((unsigned char)c) && i < n && 
			((unsigned char*)s)[i] != '\0')
		i++;
	if (((unsigned char*)s)[i] == ((unsigned char)c))
		return (((unsigned char*)s) + i);
	return (NULL);
}
