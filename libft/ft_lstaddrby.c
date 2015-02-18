/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddrby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 14:37:29 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 15:44:32 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddrby(t_list **alst, t_list *new,
		int (*f)(void *, void *, size_t, size_t))
{
	t_list	*previous;
	t_list	*view;

	if (alst != NULL && new != NULL && f != NULL)
	{
		previous = NULL;
		view = *alst;
		while (view != NULL && (*f)(new->content, view->content,
					new->csize, view->csize) < 1)
		{
			previous = view;
			view = view->next;
		}
		if (previous != NULL)
			ft_lstaddafter(&previous, new);
		else
			ft_lstadd(alst, new);
	}
}
