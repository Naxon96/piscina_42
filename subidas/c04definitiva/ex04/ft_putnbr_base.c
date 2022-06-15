/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:11:50 by igarcia-          #+#    #+#             */
/*   Updated: 2022/03/03 20:32:20 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				return (0);
		}
		if (base[i] < 32 || base[i] > 126 || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_nbr;
	long	nb;

	base_nbr = 0;
	nb = nbr;
	if (ft_base_error(base) == 1)
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = -1 * nb;
		}
		while (base[base_nbr] != '\0')
			base_nbr++;
		if (nb < base_nbr)
			write (1, &base[nb], 1);
		if (nb >= base_nbr)
		{
			ft_putnbr_base(nb / base_nbr, base);
			ft_putnbr_base(nb % base_nbr, base);
		}
	}
}
