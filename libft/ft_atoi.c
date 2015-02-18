/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:53:32 by mdarriga          #+#    #+#             */
/*   Updated: 2014/11/06 09:37:04 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_spe(int c)
{
	char	*special_char;
	int		i;

	special_char = "\n\v\t\r\f ";
	i = 0;
	while (i < 6)
	{
		if (special_char[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int s;
	int neg;

	s = 0;
	neg = 1;
	while (ft_spe(*str))
	{
		str++;
	}
	while ((*str == '+' || *str == '-') && neg == 1)
	{
		if (*str == '-' || *(str + 1) == '+')
		{
			neg = -1;
			if (*(str - 1) == '+')
				str--;
		}
		str++;
	}
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		s = s * 10 + (*str) - 48;
		str++;
	}
	return (s * neg);
}
