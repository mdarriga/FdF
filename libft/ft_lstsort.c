/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 16:27:39 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 15:23:15 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort(t_list *new, t_list **lst)
{
	t_list	*view;
	t_list	*previous;

	previous = NULL;
	view = *lst;
	while (view != NULL)
	{
		if ((ft_strcmp(((struct dirent *)(view->next->content))->d_name,
					((struct dirent *)(new->content))->d_name) <= 0)
					|| view->next == NULL)
		{
			new->next = view;
			if (previous == NULL)
				previous->next = new;
			view = NULL;
		}
		else
		{
			previous = view;
			view = view->next;
		}
	}
}
