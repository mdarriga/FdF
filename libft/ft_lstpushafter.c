/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushafter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 15:49:34 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:55:51 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushafter(t_list **lst, void *content, size_t content_size)
{
	t_list	*new;

	new = ft_lstnew(content, content_size);
	if (lst != NULL && new != NULL)
		ft_lstaddafter(lst, new);
	return (new);
}
