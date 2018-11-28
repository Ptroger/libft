/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:46:22 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/28 17:15:02 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	if (s == '\0' || f == '\0')
		return (NULL);
	while (s[i])
	{
		new[i] = (f)(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
