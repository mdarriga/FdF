/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddafter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 15:19:19 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:54:44 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddafter(t_list **previous, t_list *new)
{
	if (previous != NULL && new != NULL)
	{
		new->next = (*previous)->next;
		(*previous)->next = new;
	}
}
