/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:59:39 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/30 13:40:39 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	if (!lst || !*lst)
		return ;
	if ((*lst)->next)
		ft_lstdel(&(*lst)->next, del);
	ft_lstdelone(lst, del);
}
