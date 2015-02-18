/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:04:11 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/05 16:21:53 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_min_int(void)
{
	ft_putchar('-');
	ft_putchar('2');
	return (147483648);
}

void			ft_putnbr(int nb)
{
	int i;
	int div;

	i = 1;
	div = 1;
	if (nb == -2147483648)
		nb = ft_min_int();
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	while ((nb / div) > 9)
	{
		div = div * 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar('0' + (nb / div) % 10);
		div = div / 10;
		i--;
	}
}
