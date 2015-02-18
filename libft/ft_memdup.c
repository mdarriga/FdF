/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 15:37:06 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:59:12 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t n)
{
	char *new;

	new = (char *)malloc(n);
	if (!new)
		return (NULL);
	ft_memcpy(new, src, n);
	return ((void *)new);
}
