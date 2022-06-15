/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:03:36 by igarcia-          #+#    #+#             */
/*   Updated: 2022/04/04 15:18:38 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);
	if  (size == 0)
		return (ft_strlen(src));
	if (i > size)
		return (ft_strlen(src) + size);
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
	c++;
	return (c);
}
