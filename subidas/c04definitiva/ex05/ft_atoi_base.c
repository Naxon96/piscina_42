/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:42:01 by igarcia-          #+#    #+#             */
/*   Updated: 2022/03/03 20:34:55 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	n;

	i = 0;
	signo = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * signo);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int		base_nbr;
	int		r;
	int		signo;

	base_nbr = 0;
	r = 1;
	signo = 1;
	if (nbr < 0)
	{
		signo = -1;
		nbr *= -1;
	}
	while (base[base_nbr] != '\0')
		base_nbr++;
	if (nbr < base_nbr)
		return (&base[nbr]);
	if (nbr >= base_nbr)
	{
		ft_putnbr_base(nbr / base_nbr, base);
		r = ft_putnbr_base(nbr % base_nbr, base) + (r * base_nbr);
	}
	return (r * signo);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;

	if (ft_base_error(base) == 0)
		return (0);
	r = ft_atoi(str);
	r = ft_putnbr_base(r, base);
	return (r);
}
