/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 15:04:00 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/03 17:07:52 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**tabcpy(char **tab)
{
	int		i;
	char	**result;

	i = 0;
	while (tab[i] != 0)
		i++;
	if (!(result = (char **)malloc(sizeof(char *) * (i + 2))))
		return (NULL);
	i = 0;
	while (tab[i] != 0)
	{
		result[i] = ft_strdup(tab[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
