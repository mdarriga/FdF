/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 11:29:36 by mdarriga          #+#    #+#             */
/*   Updated: 2015/01/12 19:51:21 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_error(void)
{
	ft_putstr("Map is invalid.\n");
	exit(0);
}

int		len_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}

char	***ft_get_map(char *file, int j, int k)
{
	int		fd;
	int		i;
	char	***tab;
	char	**tmp;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		print_error();
	i = 0;
	if (!(tab = malloc(sizeof(char *) * 500)))
		return (NULL);
	while (get_next_line(fd, &line))
	{
		tmp = ft_strsplit(line, ' ');
		if (j == 0)
			k = len_tab(tmp);
		j = len_tab(tmp);
		if (j != k)
			print_error();
		tab[i] = tmp;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int		main(int ac, char **av, char **env)
{
	t_env	e;

	(void)ac;
	if (!env[0])
	{
		ft_putendl("Invalid environment.");
		exit (0);
	}
	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 800, 600, "Mdarriga - FdF");
	mlx_key_hook(e.win, key_hook, &e);
	if (((e.map = ft_get_map(av[1], 0, 0)) == NULL))
	{
		ft_putstr("Map is invalid.\n");
		exit(0);
	}
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
