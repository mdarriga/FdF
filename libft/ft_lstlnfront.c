/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlnfront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 09:15:27 by mdarriga          #+#    #+#             */
/*   Updated: 2014/12/17 14:55:29 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlnfront(t_list **alst, void *content, size_t csize)
{
	t_list	*new_lst;

	if (alst != NULL)
	{
		new_lst = ft_lstln(content, csize);
		if (new_lst == NULL)
			return (NULL);
		ft_lstadd(alst, new_lst);
		return (new_lst);
	}
	return (NULL);
}
