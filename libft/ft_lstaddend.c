/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:40:26 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/21 14:25:28 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*view;

	view = *alst;
	while (view->next != NULL)
		view = view->next;
	view->next = new;
}
