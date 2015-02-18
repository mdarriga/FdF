/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:09:06 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:57:10 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstshift(t_list **list)
{
	t_list	*save;

	if (list != NULL && *list != NULL)
	{
		save = (*list)->next;
		if ((*list)->content != NULL)
			free((*list)->content);
		free(*list);
		*list = save;
	}
}
