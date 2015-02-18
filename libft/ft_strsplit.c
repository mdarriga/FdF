/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:11:39 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/06 14:35:47 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_number(const char *s, char c)
{
	int		i;
	int		wd_number;

	i = 0;
	wd_number = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			wd_number++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (wd_number);
}

static int		skip(const char *str, int i, char c)
{
	while (str[i] == c)
		i++;
	return (i);
}

static int		word_len(const char *str, int i, char c)
{
	int		len;

	len = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(const char *str, char c)
{
	char	**tab;
	int		i[2];
	int		k;

	i[0] = 0;
	k = 0;
	if (str == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (word_number(str, c) + 1));
	while (i[0] < word_number(str, c))
	{
		k = skip(str, k, c);
		i[1] = 0;
		tab[i[0]] = (char *)malloc(sizeof(char) * (word_len(str, k, c) + 1));
		while (str[k] != '\0' && str[k] != c)
		{
			tab[i[0]][i[1]] = str[k];
			k++;
			i[1]++;
		}
		tab[i[0]][i[1]] = '\0';
		i[0]++;
	}
	tab[i[0]] = NULL;
	return (tab);
}
