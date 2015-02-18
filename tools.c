/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 16:50:48 by mdarriga          #+#    #+#             */
/*   Updated: 2015/01/12 19:01:16 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_pos	set_pos(int x, int y)
{
	t_pos	p;

	p.x = x;
	p.y = y;
	return (p);
}

int		key_hook(int keycode, t_env *e)
{
	(void)*e;
	if (keycode == 65307)
		exit(0);
	return (0);
}

int		expose_hook(t_env *e)
{
	draw(e);
	return (0);
}
