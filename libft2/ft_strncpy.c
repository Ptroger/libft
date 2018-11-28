/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:42:21 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/27 11:13:34 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			dest[i] ='\0';
			return (dest);
		}
		else
		{
			dest[i] =src[i];
			i++;
		}
	}
	return (dest);
}
