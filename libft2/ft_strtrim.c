/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:46:00 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 18:53:21 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		c; 
	char	*new;

	c = ft_strlen(s);
	i = 0;
	while (ft_isspace(s[c - 1]))
		c--;
	while (ft_isspace(s[i]))
		i++;
	len = c - i;
	if (len <= 0)
		return (new = ft_strnew(1));
	if (!(new = ft_strnew(len)))
		return (NULL);
	c = 0;
	while (c < len)
	{
		new[c] = s[i];
		c++;
		i++;
	}
	new[c] = '\0';
	return (new);
}
