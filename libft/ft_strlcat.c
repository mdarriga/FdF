/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:16:16 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/06 14:03:19 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		a;
	size_t		res;

	i = 0;
	a = 0;
	res = ft_strlen(dst) + ft_strlen(src);
	while (dst[i] != 0 && i < size)
		i = i + 1;
	if (size == i)
		return (i + ft_strlen(src));
	while (i != (size - 1) && src[a] != 0)
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = 0;
	return (res);
}
