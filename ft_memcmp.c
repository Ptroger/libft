/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:04:40 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/15 14:15:43 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (((char*)s1)[i] == ((char*)s2)[i] && i <= n)
		i++;
	return (((char*)s1)[i] - ((char*)s2)[i]);
}
