/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:32:03 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 11:24:12 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t            i;
	unsigned char    *source;
	unsigned char    *desti;

	i = 0;
	source = (unsigned char *)src;
	desti = (unsigned char *)dest;
	while (i < n)
	{
		desti[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
