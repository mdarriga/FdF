/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:19:56 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:56:04 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushfront(t_list **alst, const void *content, size_t csize)
{
	t_list	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstnew(content, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstadd(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
