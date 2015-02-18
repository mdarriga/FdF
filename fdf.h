/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 13:36:28 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/03 12:53:59 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 512
# define ABS(x) (x < 0 ? -x : x)

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		***map;
}				t_env;

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_pos;

typedef struct	s_pos2
{
	double		x;
	double		y;
}				t_pos2;

typedef struct	s_need
{
	int			color;
	int			limit;
}				t_need;

char			***ft_get_map(char *file, int j, int k);
int				get_next_line(const int fd, char **line);
int				key_hook(int keycode, t_env *e);
int				expose_hook(t_env *e);
void			draw(t_env *e);
t_pos			set_pos(int x, int y);

#endif
