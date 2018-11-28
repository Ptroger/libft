/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:47:26 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/26 18:47:28 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	p = (char*)malloc(size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, ft_strlen(p));
	return (p);
}
