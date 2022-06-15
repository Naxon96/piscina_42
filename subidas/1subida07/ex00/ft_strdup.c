/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:11:30 by igarcia-          #+#    #+#             */
/*   Updated: 2022/03/01 18:22:08 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*a;

	i = 0;
	while (src[i] != '\0')
		i++;
	a = (char *) malloc ((i + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

int main()
{
    char *tab = "holaquetal";
	char *tab2;
    tab2 = ft_strdup(tab);
		printf("%s\n", tab2);
}