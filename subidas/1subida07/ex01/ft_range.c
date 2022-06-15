/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:15:25 by igarcia-          #+#    #+#             */
/*   Updated: 2022/03/01 18:38:33 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	i = 0;
	if (min >= max)
		return (NULL);
	a = (int *) malloc ((max - min) * sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}

int main()
{
    int *tab;
	int j;
    tab = ft_range(3, 9);
	for (int i = 0; i < 6; i++)
		printf("%d\n", tab[i]);
		//printf("%d\n", j);
}