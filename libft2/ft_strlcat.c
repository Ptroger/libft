/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:30:09 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 15:04:54 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dest);
	if (len >= size)
		return (ft_strlen(src) + size);
	ft_strncat(dest, src, size - len - 1);
	return (ft_strlen(src) + len);
}
