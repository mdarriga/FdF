/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 13:56:17 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/09 17:13:28 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*cpy;

	while (lst != NULL)
	{
		cpy = (t_list *)malloc(sizeof(t_list *));
		cpy->next = (t_list *)malloc(sizeof(t_list *));
		cpy->content = lst->content;
		cpy = cpy->next;
		lst = lst->next;
	}
	cpy = NULL;
	return (cpy);
}
