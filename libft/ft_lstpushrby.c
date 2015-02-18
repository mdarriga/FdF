/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushrby.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 14:32:26 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:57:07 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushrby(t_list **alst, void *content, size_t content_size,
		int (*f)(void *, void *, size_t, size_t))
{
	t_list	*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstnew(content, content_size);
		ft_lstaddrby(alst, new, (*f));
		return (new);
	}
	else
		return (NULL);
}
