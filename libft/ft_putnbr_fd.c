/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:04:19 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/05 16:24:29 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_min_int(int fd)
{
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	return (147483648);
}

void			ft_putnbr_fd(int nb, int fd)
{
	int i;
	int div;

	i = 1;
	div = 1;
	if (nb == -2147483648)
		nb = ft_min_int(fd);
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar_fd('-', fd);
	}
	while ((nb / div) > 9)
	{
		div = div * 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar_fd('0' + (nb / div) % 10, fd);
		div = div / 10;
		i--;
	}
}
