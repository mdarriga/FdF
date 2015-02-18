/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:56:09 by mdarriga          #+#    #+#             */
/*   Updated: 2015/01/09 15:05:03 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_readtolst(int fd)
{
	t_list	*lst;
	t_list	*lst_first;
	char	*buffer;

	lst = NULL;
	lst_first = NULL;
	while (get_next_line(fd, &buffer))
	{
		if (!(lst = ft_lstlnafter(lst, buffer, sizeof(buffer))))
			return (NULL);
		if (lst_first == NULL)
			lst_first = lst;
	}
	return (lst_first);
}
