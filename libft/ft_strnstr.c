/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:48:10 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/04 12:51:53 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && s2[j] && n--)
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else if (s2[j] != '\0')
		{
			i++;
			j = 0;
		}
	}
	if (s2[j] != '\0')
		return (NULL);
	else
		return ((char *)s1 + i - j);
}
