/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:21:54 by igarcia-          #+#    #+#             */
/*   Updated: 2022/03/01 18:27:14 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*a;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = (int *) malloc ((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (-1);
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	*range = a;
	return (i);
}

int main()
{
    int *tab;
	int j;
    j = ft_ultimate_range(&tab, 2, 9);
	for (int i = 0; i < 7; i++)
		printf("%d\n", tab[i]);
		printf("%d\n", j);
}