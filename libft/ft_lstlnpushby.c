/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnpushby.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 15:26:42 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:55:35 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlnpushby(t_list **alst, void *content, size_t content_size,
		int (*f)(void *, void *, size_t, size_t))
{
	t_list	*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstln(content, content_size);
		if (new == NULL)
			return (NULL);
		ft_lstaddby(alst, new, f);
		return (new);
	}
	else
		return (NULL);
}
