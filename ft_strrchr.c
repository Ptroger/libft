/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptroger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:09:13 by ptroger           #+#    #+#             */
/*   Updated: 2018/11/10 13:12:02 by ptroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*strchr(const char *s, int c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s[j])
		j++;
	i = j;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return ((char *)s + j);
}

