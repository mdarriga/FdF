/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:28:32 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/09 16:38:07 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new_list;

	if (!(new_list = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->csize = 0;
	}
	else
	{
		new_list->content = (void *)ft_memalloc(content_size);
		ft_memcpy(new_list->content, content, content_size);
		new_list->csize = content_size;
	}
	new_list->next = NULL;
	return (new_list);
}
