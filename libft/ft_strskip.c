/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strskip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 16:57:57 by mdarriga          #+#    #+#             */
/*   Updated: 2015/01/20 11:49:01 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init_i_j(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

char		*ft_strskip(char *s1, char c)
{
	int		i;
	int		j;
	char	*s2;

	if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s1))))
		return (NULL);
	init_i_j(&i, &j);
	while (s1[i] != '\0')
	{
		if (s1[i] != c)
			s2[j++] = s1[i];
		i++;
		while (s1[i] == c)
		{
			if (s1[i + 1] != c && s1[i + 1] != '\0')
			{
				s2[j] = ' ';
				j++;
			}
			i++;
		}
	}
	s2[j] = '\0';
	return (s2);
}
