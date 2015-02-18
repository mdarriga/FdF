/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 16:12:21 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/13 17:02:55 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= (int)ft_strlen(base))
	{
		ft_putnbr_base(nb / (int)ft_strlen(base), base);
		ft_putnbr_base(nb % (int)ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb]);
}
