/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:17:22 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/15 19:41:23 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	scan_for_negative(int *number);
void	strip_print_number(int *number);
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	scan_for_negative(&nb);
	strip_print_number(&nb);
}

void	scan_for_negative(int *number)
{
	char	negative;

	negative = '-';
	if (*number < 0)
	{
		write(1, &negative, 1);
		*number = *number * (-1);
	}
}

void	strip_print_number(int *number)
{
	char	strnum[9];
	char	number_char;
	int		arr_index;

	number_char = ' ';
	arr_index = 0;
	while (*number > 0)
	{
		number_char = *number % 10 + '0';
		*number = *number - *number % 10;
		*number = *number / 10;
		strnum[arr_index] = number_char;
		arr_index++;
	}
	while (arr_index >= 0)
	{
		write(1, &strnum[arr_index - 1], 1);
		arr_index--;
	}
}
