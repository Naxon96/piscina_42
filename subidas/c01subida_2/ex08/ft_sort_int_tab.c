/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:06:57 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/26 19:22:58 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		c;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
			c = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = c;
			}
		i++;
		}
		j++;
	}
}

int main(void)
{
	int tab[8] = {4, 8, 3, 6, 5, 2, 7, 2};
	int i;
	i = 0;
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, 8);
	printf("\n");
	i=0;
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}

	return (0);
}