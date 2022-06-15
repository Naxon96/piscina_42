/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:56:29 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/26 19:19:07 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i++;
		j--;
	}
}

int main(void)
{
	int tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int i;
	i = 0;
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 8);
	printf("\n");
	i=0;
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}

	return (0);
}