/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:42:21 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/10 14:45:19 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

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
