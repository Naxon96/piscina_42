/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:10:33 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/20 21:14:49 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < 'a' || str[i - 1] > 'z'))
			{
				if ((str[i - 1] < '0' || str[i - 1] > '9'))
				{
					if ((str[i - 1] > 'Z' || str[i - 1] < 'A'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
