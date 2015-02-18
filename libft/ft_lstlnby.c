/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 09:16:27 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:55:24 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlnby(t_list **alst, void *content, size_t csize,
		int (*f)(void *, void *, size_t, size_t))
{
	t_list		*new;

	if (alst != NULL && f != NULL)
	{
		new = ft_lstln(content, csize);
		if (new != NULL)
			ft_lstaddby(alst, new, (*f));
		return (new);
	}
	return (NULL);
}
