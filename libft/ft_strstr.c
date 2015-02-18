/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:44:05 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/30 13:42:47 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *hstack, char const *needle)
{
	char	*start;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!needle || !nlen || !hstack)
		return ((char*)hstack);
	start = (char*)hstack;
	while ((start = ft_strchr(start, *needle)))
	{
		if (!ft_strncmp(start, needle, nlen))
			return (start);
		start++;
	}
	return (NULL);
}
