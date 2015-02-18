/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 13:39:26 by mdarriga          #+#    #+#             */
/*   Updated: 2015/01/12 19:00:48 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_put_pixel(t_env *e, t_pos p0, t_pos2 p3, t_need x)
{
	int	i;

	i = 0;
	while (i < x.limit)
	{
		mlx_pixel_put(e->mlx, e->win, p0.x + (i * p3.x),
			p0.y + (i * p3.y), x.color);
		i++;
	}
}

void	ft_print_line(t_env *e, t_pos p0, t_pos p1, int color)
{
	t_pos	p2;
	t_pos2	p3;
	t_need	x;

	p2 = set_pos(p1.x - p0.x, p1.y - p0.y);
	if (ABS(p2.x) == ABS(p2.y))
	{
		p3.x = p2.x > 0 ? 1.0 : -1.0;
		p3.y = p2.y > 0 ? 1.0 : -1.0;
		x.limit = ABS(p2.x);
	}
	else if (ABS(p2.x) > ABS(p2.y))
	{
		p3.x = p2.x > 0 ? 1.0 : -1.0;
		p3.y = ((double)ABS(p2.y) / ABS(p2.x)) * (p2.y > 0 ? 1 : -1);
		x.limit = ABS(p2.x);
	}
	else
	{
		p3.x = ((double)ABS(p2.x) / ABS(p2.y)) * (p2.x > 0 ? 1 : -1);
		p3.y = p2.y > 0 ? 1.0 : -1.0;
		x.limit = ABS(p2.y);
	}
	x.color = color;
	ft_put_pixel(e, p0, p3, x);
}

void	draw_y(t_env *e, t_pos pos, int i, int j)
{
	t_pos	pos2;

	if ((e->map)[i + 1] != NULL && (e->map)[i + 1][j] != NULL)
	{
		pos2 = set_pos(300 - (i - j + 1) * 20, 120 - (i + j + 1)
			* -13 - ft_atoi((e->map)[i + 1][j]));
		ft_print_line(e, pos, pos2, 0xCC0000);
		if (ft_atoi((e->map)[i][j]) != 0 || ft_atoi((e->map)[i + 1][j]) != 0)
			ft_print_line(e, pos, pos2, 0xFFCC00);
	}
}

void	draw_x(t_env *e, t_pos p0, int i, int j)
{
	t_pos	p1;

	if ((e->map)[i][j + 1] != NULL)
	{
		p1 = set_pos(p0.x + 20, 120 - (i + j + 1)
			* -13 - ft_atoi((e->map)[i][j + 1]));
		ft_print_line(e, p0, p1, 0xCC0000);
		if (ft_atoi((e->map)[i][j]) != 0 || ft_atoi((e->map)[i][j + 1]) != 0)
			ft_print_line(e, p0, p1, 0xFFCC00);
	}
}

void	draw(t_env *e)
{
	t_pos	pos;
	int		i;
	int		j;

	i = 0;
	while ((e->map)[i] != NULL)
	{
		j = 0;
		while ((e->map)[i][j] != NULL)
		{
			pos = set_pos(300 - (i - j) * 20, 120 - (i + j)
				* -13 - ft_atoi((e->map)[i][j]));
			if ((e->map)[i][j] != NULL)
				draw_x(e, pos, i, j);
			if ((e->map)[i])
				draw_y(e, pos, i, j);
			j++;
		}
		i++;
	}
}
