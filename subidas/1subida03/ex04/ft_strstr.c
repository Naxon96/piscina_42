/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:54:45 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/21 20:50:45 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			c = i;
			while (str[c] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				c++;
				j++;
			}
		}
		i++;
	}
	return (0);
}
