/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:17:10 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/15 19:38:07 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ck_valid_number_2(char *lst, int size);
void	write_number(char *lst, int size);
void	ini_array(char *lst, int size);
void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	char	list[9];
	int		i;
	int		i2;

	ini_array(list, n);
	i = 0;
	i2 = 0;
	while (list[n - 1] <= '9')
	{	
		list[i]++;
		i2 = n - 1;
		while (i2 > 0)
		{
			if (list[i2 - 1] > '9')
			{
				list[i2]++;
				list[i2 - 1] = '0';
			}
			i2--;
		}
		if (ck_valid_number_2(list, n) == 1)
			write_number(list, n);
	}
}

void	ini_array(char *lst, int size)
{
	int	i;

	i = 0;
	if (size > 9)
		return ;
	while (i < size)
	{
		lst[i] = '0';
		i++;
	}
}

int	ck_valid_number_2(char *lst, int size)
{
	int	i;
	int	print_key;

	i = size - 1;
	print_key = 1;
	while (i > 0)
	{
		if (lst[i] < lst[i - 1])
		{
		}
		else
		{
		print_key = 0;
			break ;
		}
		i--;
	}
	return (print_key);
}

void	write_number(char *lst, int size)
{
	int		i;
	char	*c;

	i = size - 1;
	c = ", ";
	while (i >= 0)
	{
		write(1, &lst[i], 1);
		i--;
	}
	if (lst[size - 1] == 10 - size + '0')
		c = "\n";
	write(1, c, 2);
}
