/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 16:51:38 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/09 16:36:00 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstln(void *content, size_t csize)
{
	t_list *new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list != NULL)
	{
		if (content != NULL)
		{
			new_list->content = content;
			new_list->csize = csize;
		}
		else
		{
			new_list->content = NULL;
			new_list->csize = 0;
		}
	}
	new_list->next = NULL;
	return (new_list);
}
